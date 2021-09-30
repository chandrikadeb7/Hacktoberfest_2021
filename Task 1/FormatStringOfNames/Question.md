# FORMAT STRING OF NAMES

Given: an array containing hashes of names

**Returns** 
* a string formatted as a list of names separated by commas except for the last two names, which should be separated by an ampersand.

**Function Description**
 - map only names in new array(names).
 - remove last element of names a assign to a variable.
 - if array has values return name joins with the last value else return last name.


**Example:** 

```js
formatStringOfNames([ {name: 'Bart'}, {name: 'Lisa'}, {name: 'Maggie'} ])
// returns 'Bart, Lisa & Maggie'
formatStringOfNames([ {name: 'Bart'}, {name: 'Lisa'} ])
// returns 'Bart & Lisa'
formatStringOfNames([ {name: 'Bart'} ])
// returns 'Bart'
list([])
// returns ''
```