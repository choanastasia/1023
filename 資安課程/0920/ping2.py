import flask
from flask import request
import os
import shlex

app =app = flask.Flask(__name__)
@app.route('/ping')
def ping():
    address = shlex.quote(request.args.get("address")) # address argument is shell-escaped
    cmd = "ping -c 1 " + str(address)
    p =os.popen(cmd) # compliant
    return (p.read())

if __name__ == '__main__':
    app.run()