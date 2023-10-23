# save this as xssapp2.py
import flask
from flask import render_template
from flask import request
app = flask.Flask(__name__)
@app.route("/")
@app.route("/xsstest")
def xsstest():
    return render_template("test.txt", hello=request.args.get("hello"))
if __name__ == '__main__':
    app.run()
