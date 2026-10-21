url = "https://official-joke-api.appspot.com/random_joke";

async function getJoke() {
  try {
    const response = await fetch(url);
    const data = await response.json();
    const jokeText = data.setup + " " + data.punchline;
    document.querySelector(".joke").textContent = jokeText;

    console.log(data);
  } catch (error) {
    console.log("error fetching joke", error);
  }
}
const btn = document.querySelector(".btn");
btn.addEventListener("click", getJoke);
