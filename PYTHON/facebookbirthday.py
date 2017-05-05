#!/usr/bin/env python
import fbconsole #install fbconsol using command "$ sudo pip install fbconsole"
import requests
import json

def commentlikepost(post_limit):
	''' Likes and comments post '''
	
	fbconsole.authenticate()
	query = fbconsole.fql("SELECT actor_id, post_id FROM stream WHERE source_id=me() LIMIT %s" % post_limit)
	
	for post in query:
		r = requests.get('https://g...content-available-to-author-only...k.com/%s' % post['actor_id'])
		user = json.loads(r.text)
		comment = '%s: Thanks a ton! :)' % user['first_name']
		print comment
			
		#Reply comment
		comment_id = requests.post("https://g...content-available-to-author-only...k.com/" + str(post['post_id'])
			+ "/comments/?access_token=" + fbconsole.ACCESS_TOKEN
			+ "&message=%s" % comment
			)
		print "Comment id: " + comment_id.text
			
		#Like the post
		requests.post("https://g...content-available-to-author-only...k.com/" + str(post['post_id']) + "/likes/?access_token=" + fbconsole.ACCESS_TOKEN + "&method=POST")
		print "Liked"
	fbconsole.logout()
		
if __name__=='__main__':
	#Reply/like on last N (1 here) wallposts
	commentlikepost(1)
	print "Done"