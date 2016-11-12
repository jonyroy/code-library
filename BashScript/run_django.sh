echo "Going to web folder..........."
sleep 5
cd web
echo "Activate Virtualenv"
sleep 5
source firstapp/bin/activate
echo "going to mysite"
sleep 2
cd mysite
echo "runing the server"
sleep 5
python manage.py runserver

