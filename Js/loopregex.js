const vowels = s.match(/[aeiou]/gi).join('\n');
const consonants = s.match(/[^aeiou]/gi).join('\n');

console.log(vowels.concat('\n',consonants));


// Complete the function in the editor below by returning a RegExp object, , that matches any string that begins and ends with the same vowel. Recall that the English vowels are a, e, i, o, and u.
let re = /^([aeiou]).*\1$/;;