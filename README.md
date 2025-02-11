# Introduction

The goal of this project was to create a functional miniature desktop display inspired by the 'Macrodata Refinement' computers featured in Apple TV's Severance. This build consists of two core elements: the software and the physical enclosure, both outlined below.

Feel free to email comments, suggestions, or inquiries directly to andrewchilx@gmail.com.

<p align="center">
  <img src="https://github.com/user-attachments/assets/aaed01c5-b200-4d43-9d2c-5a4399ba4960" width="98%">
</p>
<p align="center">
  <img src="https://github.com/user-attachments/assets/dc987a56-2a41-4780-ac42-345e78c8344e" width="49%">
  <img src="https://github.com/user-attachments/assets/f46a447d-42ce-47af-b2ae-17409240cb9f" width="49%">
</p>

# I. The Software

#### Objectives

✔ **Generate a randomized number grid** with grouped 'bad numbers'.  
✔ **Animate and style the interface** to match the aesthetics of the show. 

### a. The Number Grid

<table align="center" width="90%">
  <tr>
    <td><b>1</b></td>
    <td><b>GENERATE</b></td>
    <td>A NxN grid is filled with random numbers between 0-9.</td>
  </tr>
  <tr>
    <td><b>2</b></td>
    <td><b>MAP</b></td>
    <td>A Perlin noise map generates smooth gradients, grouping numbers logically.</td>
  </tr>
  <tr>
    <td><b>3</b></td>
    <td><b>THRESHOLD</b></td>
    <td>Values above a set threshold are marked as 'bad'.</td>
  </tr>
  <tr>
    <td><b>4</b></td>
    <td><b>GROUP</b></td>
    <td>'Bad' numbers are grouped based on their proximity to others.</td>
  </tr>
  <tr>
    <td colspan="3" align="center">
      <img src="https://github.com/user-attachments/assets/33353a90-e046-4c57-9a20-040a64b68e8e" width="90%">
    </td>
  </tr>
</table>

### b. The Interface
