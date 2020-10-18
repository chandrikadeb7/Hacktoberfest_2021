function formatStringOfNames(names) {
    let namesFormat = names.map(p => p.name)
    let lastName = namesFormat.pop()
    return namesFormat.length ? namesFormat.join(", ") + " & " + lastName : lastName || ""
  }