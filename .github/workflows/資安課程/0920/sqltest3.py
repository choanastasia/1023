import mysql.connector 
import os

db_password = os.getenv('DB_PASSWORD')
db = mysql.connector.connect(host="localhost", user="newuser", passwd=db_password, db="sample") 
cur = db.cursor() 
name = input('Enter Name: ') 
cur.execute("SELECT * FROM userdata WHERE Name = %s;", (name,))
for row in cur.fetchall(): 
    print(row) 
db.close()