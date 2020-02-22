from flask import Flask
from flask import render_template
app = Flask(__name__)

import time
import serial


ser = serial.Serial("/dev/ttyACM1")
@app.route('/')
def index():
    return render_template("index.html")

@app.route('/off')
def off():
    ser.write(b'0')
    return render_template('index.html')
@app.route('/on')
def on():
    ser.write(b'1')
    return render_template('index.html')


if __name__ == '__main__':
    app.run()
