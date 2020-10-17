var tc = parseInt(readline());
for (; tc--; ) {
  var n = parseInt(readline());
  print(2);
  for (var i = n - 1; i >= 1; i--) {
    print(i + " " + Math.min(n, i + 2));
  }
}
