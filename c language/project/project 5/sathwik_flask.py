from flask import Flask

app = Flask(__name__)

@app.route("/")   # homepage
def home():
    return "Hello Sathwik! 🎉 This is your first Flask app."

@app.route("/about")
def about():
    return "This is the about page."

if __name__ == "__main__":
    app.run(debug=True)

