# Viral Advertising

## Problem Statement
HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly 5 people on social media.

On the first day, half of those 5 people (i.e., floor(5/2) = 2) like the advertisement and each shares it with 3 of their friends. At the beginning of the second day, floor(5/2) * 3 = 2 * 3 = 6 people receive the advertisement.

Each day, floor(recipients/2) of the recipients like the advertisement and will share it with 3 friends on the following day. Assuming nobody receives the advertisement twice, determine how many people have liked the ad by the end of a given day, beginning with launch day as day 1.

For example, assume you want to know how many have liked the ad by the end of the 5<sup>th</sup> day.

<table>
<thead>
  <tr>
    <th>Day</th>
    <th>Shared</th>
    <th>Liked</th>
    <th>Cumulative</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>1</td>
    <td>5</td>
    <td>2</td>
    <td>2</td>
  </tr>
  <tr>
    <td>2</td>
    <td>6</td>
    <td>3</td>
    <td>5</td>
  </tr>
  <tr>
    <td>3</td>
    <td>9</td>
    <td>4</td>
    <td>9</td>
  </tr>
  <tr>
    <td>4</td>
    <td>12</td>
    <td>6</td>
    <td>15</td>
  </tr>
  <tr>
    <td>5</td>
    <td>18</td>
    <td>9</td>
    <td>24</td>
  </tr>
</tbody>
</table>

The cumulative number of likes is 24.

## Input Format
A single integer, n, denoting a number of days.

## Output Format
Print the number of people who liked the advertisement during the first n days.