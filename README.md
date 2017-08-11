# buck-cell-config

Demonstration of how `.buckconfig` and cells interact. 

## Setup 

We have two Buck targets: 

 * A library, `mathutils`, inside of a cell at `external/mathutils`
 * A binary, `app`, that depends on `mathutils`

`mathutils` exposes an `about` function that returns some information about how it was compiled. `app` will print this info to standard output. 

Using `.buckconfig`, we set a C++ preprocessor macro `IS_INSIDE_CELL` so that we can track which `.buckconfig` was used. 

## Test

By running `app`, we can see which `.buckconfig` was used to build `mathutils`. 

```
$ buck run :app
add(1, 2) = 3
About: mathutils. inside cell? 1 outside cell? 0
```

## Conclusion

Buck will build targets using the `.buckconfig` of the cell it is in, not the `.buckconfig` of its dependent or the `.buckconfig` from where Buck was called. 
