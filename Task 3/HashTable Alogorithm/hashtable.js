'use strict';

/**
 * @Problem : Implement a Hash Table.
 * @description: Hash Table take O(1) time complexity for insert, lookup, delete and search.
 * But in case of collision it has O(n) time complexity.
 */

class Hash {
	/**
	 * @param {number} size
	 * @property {function} hashFunc - generate hash keys
	 * @property {Array} data
	 */
	constructor(size) {
		this.data = new Array(size);
		this.hashFunc = key => {
			let hash = 0;
			for (let i = 0; i < key.length; i++) {
				hash = (hash + key.charCodeAt(i)) % this.data.length;
			}
			return hash;
		};
	}

	/* set value in this.data (hash table) */

	set(key, value) {
		const pos = this.hashFunc(key);
		if (!this.data[pos]) {
			this.data[pos] = [];
		}
		this.data[pos].push([key, value]);
	}

	/* get value from this.data (hash table) via key */

	get(key) {
		const pos = this.hashFunc(key);
		const bucket = this.data[pos];
		for (let i = 0; i < bucket.length; i++) {
			if (bucket[i][0] === key) return bucket[i][1];
		}
	}
	key() {
		let count = [];
		for (let i = 0; i < this.data.length; i++) {
			if (this.data[i]) {
				for (let j = 0; j < this.data[i].length; j++)
					count.push(this.data[i][j][0]);
			}
		}
		return count;
	}
}

const newHash = new Hash(10);

newHash.set('graphs', 1000);
hash.get('graphs'); //1000

hash.set('orange', 2000);
hash.get('orange'); //2000

hash.key(); //['graphs','orange']

module.exports = newHash;
