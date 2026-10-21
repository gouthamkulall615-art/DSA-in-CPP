function createCard(title, cName, views, monthsOld, duration, thumbnail) {
    // Format views
    let viewStr;
    if (views < 1000) {
        viewStr = views;
    } else if (views >= 1000000) {
        viewStr = (views / 1000000).toFixed(1) + "M";
    } else {
        viewStr = (views / 1000).toFixed(1) + "K";
    }

    // HTML template
    let html = `
    <div class="box">
        <div class="thumbnail">
            <img src="${thumbnail}" alt="video thumbnail">
            <span class="time">${duration}</span>
        </div>
        <div class="content">
            <h4>${title}</h4>
            <p class="about">${cName} • ${viewStr} views • ${monthsOld} months ago</p>
        </div>
    </div>`;

    // Append card to container
    document.querySelector(".container").insertAdjacentHTML('beforeend', html);
}

// Example usage
createCard(
    "Introduction to Backend | Sigma Web Dev video #2",
    "CodeWithHarry",
    560000,
    7,
    "31:22",
    "https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg"
);
createCard(
    "JavaScript Crash Course | Sigma Web Dev video #3",
    "CodeWithHarry",
    450000,
    5,
    "28:45",
    "https://i.ytimg.com/vi/W6NZfCO5SIk/hqdefault.jpg"
);

createCard(
    "HTML & CSS Basics | Sigma Web Dev video #4",
    "CodeWithHarry",
    780000,
    10,
    "35:10",
    "https://i.ytimg.com/vi/pQN-pnXPaVg/hqdefault.jpg"
);

createCard(
    "ReactJS Full Tutorial | Sigma Web Dev video #5",
    "CodeWithHarry",
    620000,
    8,
    "42:00",
    "https://i.ytimg.com/vi/DLX62G4lc44/hqdefault.jpg"
);

createCard(
    "Node.js & Express | Sigma Web Dev video #6",
    "CodeWithHarry",
    510000,
    6,
    "37:15",
    "https://i.ytimg.com/vi/L72fhGm1tfE/hqdefault.jpg"
);

createCard(
    "MongoDB for Beginners | Sigma Web Dev video #7",
    "CodeWithHarry",
    400000,
    4,
    "33:50",
    "https://i.ytimg.com/vi/pWbMrx5rVBE/hqdefault.jpg"
);
