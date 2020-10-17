var tc = parseInt(readline());
for (; tc--; ) {
  var AR = readline()
    .split(" ")
    .map((x) => parseInt(x));
  var n = AR[0],
    m = AR[1];

  var ar = readline()
    .split(" ")
    .map((x) => parseInt(x));
  ar.sort((a, b) => b - a);
  var sum = 0;
  for (var i = 0; i <= m; i++) sum += ar[i];
  print(sum);
}
