#include<stdio.h>
struct student
{
    char *name;
    int roll;
    int id;
    struct extra
    {
        char father[20];
        char mother[20];
        int sibling;
    } extr;
    //struct extra extr;
};
int main()
{
    struct student n;
    new char=n.name[20];
    //freopen("output.txt","w",stdout);
    printf("Enter Name:");
    scanf("%s",n.name);
    printf("Enter Roll:");
    scanf("%d",&n.roll);
    printf("Enter ID:");
    scanf("%d",&n.id);
    printf("Enter Father's Name:");
    scanf("%s",n.extr.father);
    printf("Enter Mother's Name:");
    scanf("%s",n.extr.mother);
    printf("Enter Siblings:");
    scanf("%d",&n.extr.sibling);
    freopen("output.txt","w",stdout);
    printf("Name:%s\n",n.name);
    printf("Roll:%d\n",n.roll);
    printf("ID:%d\n",n.id);
    printf("Father's Name:%s\n",n.extr.father);
    printf("Mother's Name:%s\n",n.extr.mother);
    printf("Siblings:%d\n",n.extr.sibling);
    return 0;
}
