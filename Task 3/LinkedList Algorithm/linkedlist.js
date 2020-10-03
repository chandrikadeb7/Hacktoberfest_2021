'use strict';

/**
 * @Problem : Implement a (singly) Linked List.
 * @description: A linked list is an ordered collection of data elements.
 * A data element can be represented as a node in a linked list.
 * Each node consists of two parts: data & pointer to the next node.
 */

/**
 * Node class for creating elements in linked list
 */

class Node {
	constructor(value) {
		this.value = value;
		this.next = null;
	}
}

class LinkedList {
	constructor(value) {
		this.head = {
			value,
			next: null
		};
		this.tail = this.head;
	}

	/**
	 * append function add element to the end of the linked list.
	 * @param {number} value
	 */
	append(value) {
		const newEle = new Node(value);
		this.tail.next = newEle;
		this.tail = newEle;
	}

	/**
	 * prepend function add element to the start of the linked list.
	 * @param {number} value
	 */
	prepend(value) {
		let ele = new Node(value);
		ele.next = this.head;
		this.head = ele;
	}

	/**
	 * insert function add element at the given position in the linked list.
	 * @param {number} pos - position at which we want ti insert a node
	 * @param {number} value
	 */
	insert(pos, value) {
		let ele = new Node(value);
		let i = 1;
		let list = this.head;
		while (list.next) {
			const nextEle = list.next;
			if (i + 1 === pos) {
				list.next = ele;
				ele.next = nextEle;
				break;
			}
			list = list.next;
			i = i + 1;
		}
		if (!list.next) {
			if (i + 1 === pos) {
				list.next = ele;
				ele.next = null;
				this.tail = ele;
			} else {
				console.log("Element can't be added at the given position.");
			}
		}
	}

	// print the linked list
	print() {
		let ele = this.head;
		let result = '';
		while (ele.next) {
			result += `${ele.value} --> `;
			ele = ele.next;
		}
		result = `${result}${this.tail.value}`;
		return result;
	}
}

const MyLinkedList = new LinkedList(10);
MyLinkedList.append(5);
MyLinkedList.append(15);
MyLinkedList.print(); //10 --> 5 --> 15

MyLinkedList.prepend(45);
MyLinkedList.prepend(1); //1 --> 45 --> 10 --> 5 --> 15

module.exports = MyLinkedList;
