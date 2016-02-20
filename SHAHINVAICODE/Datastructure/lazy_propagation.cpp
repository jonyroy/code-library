#include <stdlib.h>
#include <stdio.h>

typedef struct lazy_segment_node{
  int lower_value;
  int upper_value;

  unsigned char propagated;

  struct lazy_segment_node * left_child;
  struct lazy_segment_node * right_child;
} lazy_segment_node;

lazy_segment_node * initialize(lazy_segment_node ** mem, int lower_value, int upper_value){
  lazy_segment_node * tmp = NULL;
  if(mem != NULL)
    tmp = *mem;
  if(tmp == NULL)
    tmp = malloc(sizeof(lazy_segment_node));
  if(tmp == NULL)
    return NULL;
  tmp->lower_value = lower_value;
  tmp->upper_value = upper_value;
  tmp->propagated = 0;
  tmp->left_child = NULL;
  tmp->right_child = NULL;

  if(mem != NULL)
    *mem = tmp;
  return tmp;
}

lazy_segment_node * accessErr(lazy_segment_node* node, int * error){
  if(node == NULL){
    if(error != NULL)
      *error = 1;
    return NULL;
  }
  if(node->propagated)
    return node;

  if(node->upper_value == node->lower_value){
    node->propagated = 1;
    return node;
  }
  node->left_child = initialize(NULL,node->lower_value,(node->lower_value + node->upper_value)/2);
  if(node->left_child == NULL){
    if(error != NULL)
      *error = 2;
    return NULL;
  }

  node->right_child = initialize(NULL,(node->lower_value + node->upper_value)/2 + 1,node->upper_value);
  if(node->right_child == NULL){
    free(node->left_child);
    if(error != NULL)
      *error = 3;
    return NULL;
  }
  node->propagated = 1;
  return node;
}

lazy_segment_node * access(lazy_segment_node* node){
  return accessErr(node,NULL);
}

void free_lazy_segment_tree(lazy_segment_node * root){
  if(root == NULL)
    return;
  free_lazy_segment_tree(root->left_child);
  free_lazy_segment_tree(root->right_child);
  free(root);
}

int main(){
  lazy_segment_node * test = NULL;
  initialize(&test,1,10);
  printf("Lazy evaluation test\n");
  printf("test->lower_value: %i\n",test->lower_value);
  printf("test->upper_value: %i\n",test->upper_value);

  printf("\nNode not propagated\n");
  printf("test->left_child: %p\n",test->left_child);
  printf("test->right_child: %p\n",test->right_child);

  printf("\nNode propagated with access:\n");
  printf("access(test)->left_child: %p\n",access(test)->left_child);
  printf("access(test)->right_child: %p\n",access(test)->right_child);

  printf("\nNode propagated with access, but subchilds are not:\n");
  printf("access(test)->left_child->left_child: %p\n",access(test)->left_child->left_child);
  printf("access(test)->left_child->right_child: %p\n",access(test)->left_child->right_child);

  printf("\nCan use access on subchilds:\n");
  printf("access(test->left_child)->left_child: %p\n",access(test->left_child)->left_child);
  printf("access(test->left_child)->right_child: %p\n",access(test->left_child)->right_child);

  printf("\nIt's possible to chain:\n");
  printf("access(access(access(test)->right_child)->right_child)->lower_value: %i\n",access(access(access(test)->right_child)->right_child)->lower_value);
  printf("access(access(access(test)->right_child)->right_child)->upper_value: %i\n",access(access(access(test)->right_child)->right_child)->upper_value);

  free_lazy_segment_tree(test);

  return 0;
}
