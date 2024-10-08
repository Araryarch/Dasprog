const palindrom = (text) =>
  text.toUpperCase().split('').reverse().join('') === text.toUpperCase()
