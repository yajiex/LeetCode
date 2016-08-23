/**
 * @constructor
 */
var Stack = function () {
  this.q = [];
};

/**
 * @param {number} x
 * @returns {void}
 */
Stack.prototype.push = function (x) {
  this.q.push(x);
  for (let i = 0; i < this.q.length - 1; i++) {
    this.q.push(this.q.shift());
  }
};

/**
 * @returns {void}
 */
Stack.prototype.pop = function () {
  return this.q.shift();
};

/**
 * @returns {number}
 */
Stack.prototype.top = function () {
  const temp = this.q.shift();
  this.push(temp);
  return temp;
};

/**
 * @returns {boolean}
 */
Stack.prototype.empty = function () {
  return this.q.length === 0;
};