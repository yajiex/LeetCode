/**
 * Trie
 *
 */
var TrieNode = function () {
  this.isKey = false;
  this.children = Array.from({ length: 26 }, () => null);
};

/**
 * @constructor
 */
var WordDictionary = function () {
  this.root = new TrieNode();
};

/**
 * @param {string} word
 * @return {void}
 * Adds a word into the data structure.
 */
WordDictionary.prototype.addWord = function (word) {
  let temp = this.root;
  for (let i = 0; i < word.length; i++) {
    const index = word.charCodeAt(i) - 'a'.charCodeAt(0);
    if (temp.children[index] === null) {
      temp.children[index] = new TrieNode();
    }
    temp = temp.children[index];
  }
  temp.isKey = true;
};

/**
 * @param {string} word
 * @return {boolean}
 * Returns if the word is in the data structure. A word could
 * contain the dot character '.' to represent any one letter.
 */
WordDictionary.prototype.search = function (word) {
  const query = (word, node) => {
    let temp = node;
    for (let i = 0; i < word.length; i++) {
      if (temp !== null && word[i] !== '.') {
        const index = word.charCodeAt(i) - 'a'.charCodeAt(0);
        temp = temp.children[index];
      } else if (temp !== null && word[i] === '.') {
        const tmp = temp;
        for (let j = 0; j < 26; j++) {
          temp = tmp.children[j];
          if (query(word.slice(i + 1), temp)) {
            return true;
          }
        }
      }
      else {
        break;
      }
    }
    return temp !== null && temp.isKey;
  };

  return query(word, this.root);
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * var wordDictionary = new WordDictionary();
 * wordDictionary.addWord("word");
 * wordDictionary.search("pattern");
 */