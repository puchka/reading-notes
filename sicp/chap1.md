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
