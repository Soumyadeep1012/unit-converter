<script>
function convert() {
  const type = document.getElementById("conversion").value;
  const value = parseFloat(document.getElementById("inputValue").value);
  let result = "";

  if (isNaN(value)) {
    result = "Please enter a valid number.";
  } else {
    switch (type) {
      case "mToFt":
        result = ${value} meters = ${(value * 3.28084).toFixed(2)} feet;
        break;
      case "ftToM":
        result = ${value} feet = ${(value / 3.28084).toFixed(2)} meters;
        break;
      case "kgToLb":
        result = ${value} kg = ${(value * 2.20462).toFixed(2)} lbs;
        break;
      case "lbToKg":
        result = ${value} lbs = ${(value / 2.20462).toFixed(2)} kg;
        break;
      case "cToF":
        result = ${value}°C = ${(value * 9/5 + 32).toFixed(2)}°F;
        break;
      case "fToC":
        result = ${value}°F = ${((value - 32) * 5/9).toFixed(2)}°C;
        break;
    }
  }

  document.getElementById("result").innerText = result;
}
</script>