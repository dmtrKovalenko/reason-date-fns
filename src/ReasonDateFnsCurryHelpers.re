/* Converts uncurried function of two arguments to a curried function */
type uncurried2('a, 'b, 'c) = (. 'a) => (. 'b) => 'c;
type curried2('a, 'b, 'c) = ('a, 'b) => 'c;
let curry2 = (uncurried2: uncurried2('a, 'b, 'c)): curried2('a, 'b, 'c) => {
  (a, b) => (uncurried2(. a))(. b);
};

/* Converts uncurried function of two arguments to a curried function */
type uncurried3('a, 'b, 'c, 'd) = (. 'a) => (. 'b) => (. 'c) => 'd;
type curried3('a, 'b, 'c, 'd) = ('a, 'b, 'c) => 'd;
let curry3 = (uncurried3: uncurried3('a, 'b, 'c, 'd)): curried3('a, 'b, 'c, 'd) => {
  (a, b, c) => ((uncurried3(. a))(. b))(. c);
};