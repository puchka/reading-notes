# Exercise 1.1

In below expressions, the result printed by the interpreter is given.
It's assumed that the sequence is to be evaluated in the order they
are presented.

```scheme
10
```

```
10
```

```scheme
(+ 5 3 4)
```

```
12
```

```scheme
(- 9 1)
```

```
8
```

```scheme
(/ 6 2)
```

```
3
```

```scheme
(+ (* 2 4) (- 4 6))
```

```
6
```

```scheme
(define a 3)
```

implementation dependent a = 3

```scheme
(define b (+ a 1))
```

implementation dependent b = 4

```scheme
(+ a b (* a b))
```

```
19
```

```scheme
(= a b)
```

```
false
```

```scheme
(if (and (> b a) (< b (* a b)))
    b
    a)
```

```
4
```

```scheme
(cond ((= a 4) 6)
      ((= b 4) (+ 6 7 a))
      (else 25))
```

```
16
```

```scheme
(+ 2 (if (> b a) b a))
```

```
6
```

```scheme
(* (cond ((> a b) a)
         ((< a b) b)
         (else -1)
    (+ a 1)
```

```
16
```

# Exercise 1.2

Translation of the following expression into prefix notation

$$
\frac{5 + 4 + (2 - (3 - (6 + \frac{4}{5})))}{3(6 - 2)(2 - 7)}
$$

```scheme
(/ (+ 5
      4
      (- 2 (- 3
              (+ 6
                 (/ 4 5)))))
   (* 3
      (- 6 2)
      (- 2 7)))
```

# Exercise 1.3

Definition of a procedure that takes three numbers as arguments and
returns the sum of the squares of the two larger numbers.

```scheme
(define (sum-squares-two-larger-numbers a b c)
  (cond ((and (< b a)
              (< b c)) (+ (* a a)
                          (* c c)))
        ((and (< a b)
              (< a c)) (+ (* b b)
                          (* c c)))
        (else (+ (* a a)
                 (* b b)))))
```

# Exercise 1.4

Description of the behavior of the following procedure with the
observation that our model of evaluation allows for combinations whose
operators are compound expressions.

```scheme
(define (a-plus-abs-b a b)
  ((if (> b 0) + -) a b))
```

The sub-expression `(if (> b 0) + -)` will evaluate to `+` if $b > 0$ and `-` otherwise.
So, the body of the procedure will become

- `(+ a b)` if $b > 0$
- `(- a b)` if $b \le 0$

In sum, the procedure `a-plus-abs-b` is computing $a + |b|$.

# Exercise 1.5

Ben Bitdiddle has invented a test to determine whether the interpreter
he is faced with is using applicative-order evaluation or normal-order
evaluation. He defines the following two procedures:

```scheme
(define (p) (p))

(define (test x y)
  (if (= x 0)
    0
    y))
```

Then he evaluates the expression `(test 0 (p))`.

Let's devise the behavior that Ben will observe with an interpreter that uses

- Applicative-order evaluation

The interpreter will evaluate the arguments at first and `(p)` will
call itself and will be an infinite loop that never ends.

- Normal-order evaluation

The interpreter will first expand the expression `(test 0 (p))` into

```scheme
(if (= 0 0)
  0
  (p))
```

As `(= 0 0)` evaluates to `true`, the consequent `0` will be
evaluated and the procedure evaluation will terminate with the result
`0`.

# Exercise 1.6

Alyssa P. Hacker doesn't see why `if` needs to be provided as a
special form.  "Why can't I just define it as an ordinary procedure in
terms of cond?" she asks.  Alyssa's friend Eva Lu Ator claims this can
indeed done, and she defines a new version of `if`:

```scheme
(define (new-if predicate then-clause else-clause)
  (cond (predicate then-clause)
        (else else-clause)))
```

Eva demonstrates the program for Alyssa:

```scheme
(new-if (= 2 3) 0 5)
```

```
5
```

```scheme
(new-if (= 1 1) 0 5)
```

```
0
```

Delighted, Alyssa uses `new-if` to rewrite the square-root program:

```scheme
(define (sqrt-iter guess x)
  (new-if (good-enough? guess x)
          guess
          (sqrt-iter (improve guess x)
                     x)))
```

When Alyssa attempts to use `new-if` to compute square roots, it will
end into a never ending evaluation. In fact, according to the
substitution model for procedure evaluation, the operands of `new-if`
will be evaluated before applying the operation on them.  It will then
evaluate `sqrt-iter` call even if the guess is already good
enough. The later would call another iteration, and so on...

# Exercise 1.7

The `good-enough?` test used in computing square roots will not be
very effective for finding square roots of very small numbers because
the margin of error could be higher than the number itself.

e.g.

```scheme
(square (sqrt 0.0000001))

;Value: 9.76629102245155e-4
```

For very large numbers, the procedure evaluation can take very long.

e.g.

```scheme
(sqrt 1e100)
```

The evaluation of this expression causes the interpreter to become
stuck.

An alternative strategy for implementing `good-enough?` is to watch
how `guess` changes from one iteration to the next and to stop when
the change is very small fraction of the guess.

```scheme
(define (good-enough? guess x)
  (< (abs (- guess (improve guess x))) (* 0.0001 guess)))
```

Using this new definition of `good-enough?` the previous expressions
are respectively more accurate and terminable within a reasonable
time.

```scheme
 (square (sqrt 0.0000001))

;Value: 1.0001264334838593e-7
```

```scheme
(sqrt 1e100)

;Value: 1.000000633105179e50
```

# Exercise 1.8

Newton's method for cube roots is based on the fact that if `y` is an
approximation to the cube root of `x`, then a better approximation is
given by the value

$$
\frac{\frac{x}{y²}+2y}{3}
$$

Implementation of a cube-root procedure analogous to the square-root
procedure defined earlier.

```scheme
(define (improve guess x)
  (/ (+ (/ x (square guess)) (* 2 guess)) 3))
```

```scheme
(define (cbrt-iter guess x)
  (if (good-enough? guess x)
    guess
    (cbrt-iter (improve guess x)
               x)))
```

```scheme
(define (cbrt x)
  (cbrt-iter 1.0 x))
```
