import flask
from flask import request
import os

app =app = flask.Flask(__name__)
@app.route('/ping')
def ping():
    address = request.args.get("address")
    cmd = "ping -c 1 " + str(address)
    p =os.popen(cmd) # Noncompliant
    return (p.read())

if __name__ == '__main__':
    app.run()