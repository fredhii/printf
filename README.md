![](https://i.imgur.com/XrZ9Iub.png)

### Description
`_printf` is a custom implementation of  C `printf` program function . It produces an output according to format described. It writes output in stdout *(standard output stream).*

### Usage
**String**
* Input: `_printf("%s\n", 'Awesome, isn't it?');`
* Output: `Awesome, isn't it?`

**Character**
* Input: `_printf("Just a char %c\n", 'F');`
* Output: `Just a char F`

**Integer**
* Input: `_printf("Here we number %i\n", 23);`
* Output: `Here we have number 23`

**Decimal:**
* Input: `_printf("%d\n", 1000);`
* Output:  `1000`

### Mandatory tasks

- [X] Write function that produces output with conversion specifiers c, s, and %.
- [X] Handle conversion specifiers d, i.
- [X] Create a man page for your function.

### Advanced tasks

- [X] Handle conversion specifier b.
- [ ] Handle conversion specifiers u, o, x, X.
- [X] Use a local buffer of 1024 chars in order to call write as little as possible.
- [ ] Handle conversion specifier S.
- [ ] Handle conversion specifier p.
- [ ] Handle flag characters +, space, and # for non-custom conversion specifiers.
- [ ] Handle length modifiers l and h for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the 0 flag character for non-custom conversion specifiers.
- [X] Handle the custom conversion specifier r that prints the reversed string.
- [X] Handle the custom conversion specifier R that prints the rot13'ed string.
- [ ] All above options should work well together.

## Authors
[Alison Quintero](https://github.com/AlisonQuinter17)-alisondanellaquintero@hotmail.com

[Fredy Acuña](https://github.com/fredhii)-fredhiixd@gmail.com