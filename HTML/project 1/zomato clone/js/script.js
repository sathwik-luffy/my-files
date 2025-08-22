document.getElementById("searchInput").addEventListener("keypress", function (e) {
  if (e.key === "Enter") {
    const value = e.target.value.trim();
    if (value) {
      alert(`Searching for: ${value}`);
    }
  }
});
