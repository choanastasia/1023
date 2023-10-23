import flask
from flask import request
import urllib

app =app = flask.Flask(__name__)
@app.route('/proxy')
def proxy():
    url = request.args["url"]
    return urllib.request.urlopen(url).read() # Noncompliant

if __name__ == '__main__':
    app.run()