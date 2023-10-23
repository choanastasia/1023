from flask import Flask
from flask import render_template
from flask import request
from flask import Response
app = Flask(__name__)
app.config.update(SESSION_COOKIE_SECURE=True, SESSION_COOKIE_HTTPONLY=True,SESSION_COOKIE_SAMESITE='Lax', )
@app.route("/")
@app.route("/xsstest")
def xsstest():
    resp = Response(render_template("test.txt",
    hello=request.args.get("hello")))
    resp.set_cookie('flasktest', value='my_flask_secret', secure=True,
    httponly=True, samesite='Lax')
    return resp
if __name__ == '__main__':
    app.run()
