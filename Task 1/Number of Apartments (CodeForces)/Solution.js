var inputs = parseInt(readline());
for (var i = 0; i < inputs; i++) {
  var totalWindows = parseInt(readline());
  var rooms = [0, 0, 0];
  if (totalWindows < 3 || totalWindows === 4) {
    print("-1");
    continue;
  } else {
    var isCompvared = false;

    if (totalWindows % 3 === 0) {
      rooms[0] = totalWindows / 3;
      print(rooms[0] + " " + rooms[1] + " " + rooms[2]);
      continue;
    }
    if (totalWindows % 5 === 0) {
      rooms[1] = totalWindows / 5;
      print(rooms[0] + " " + rooms[1] + " " + rooms[2]);
      continue;
    }
    if (totalWindows % 7 === 0) {
      rooms[2] = totalWindows / 7;
      print(rooms[0] + " " + rooms[1] + " " + rooms[2]);
      continue;
    }
    for (var j = Math.floor(totalWindows / 3); j >= 0; j--) {
      var leftOverWindows = totalWindows - 3 * j;

      if (leftOverWindows >= 5 && leftOverWindows % 5 === 0) {
        rooms = [j, leftOverWindows / 5, 0];
        isCompvared = true;
        break;
      } else if (leftOverWindows >= 7 && leftOverWindows % 7 === 0) {
        rooms = [j, 0, leftOverWindows / 7];
        isCompvared = true;
        break;
      } else if (leftOverWindows >= 8 && leftOverWindows % 8 === 0) {
        var total = leftOverWindows / 8;
        rooms = [j + total, total, 0];
        isCompvared = true;
        break;
      }
    }
    if (isCompvared) {
      print(rooms[0] + " " + rooms[1] + " " + rooms[2]);
    } else {
      print("-1");
    }
  }
}
