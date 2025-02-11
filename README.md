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

---
---

# I. The Software

#### Objectives

  - **Generate a randomized number grid** with grouped 'bad numbers'.  
  - **Animate and style the interface** to match the aesthetics of the show. 

### a. The Number Grid

<table align="center" width="90%">
  <tr>
    <td><b>1</b></td>
    <td><b>GENERATE</b></td>
    <td>
      <ul>
        <li>A NxN grid is created.</li>
        <li>Each cell is filled with a random integer between 0-9.</li>
      </ul>
    </td>
  </tr>
  <tr>
    <td><b>2</b></td>
    <td><b>MAP</b></td>
    <td>
      <ul>
        <li>A Perlin noise map assigns smooth gradient values to the grid.</li>
        <li>This ensures numbers are naturally grouped rather than randomly scattered.</li>
      </ul>
    </td>
  </tr>
  <tr>
    <td><b>3</b></td>
    <td><b>THRESHOLD</b></td>
    <td>
      <ul>
        <li>Each cell's value is compared to a set threshold.</li>
        <li>Values above the threshold are marked as 'bad' numbers.</li>
      </ul>
    </td>
  </tr>
  <tr>
    <td><b>4</b></td>
    <td><b>GROUP</b></td>
    <td>
      <ul>
        <li>'Bad' numbers are grouped based on proximity.</li>
        <li>At random times, a group visible in the viewport will be activated:
          <ul>
            <li>If hovered over, they become 'super active', extending their active time and appearing agitated.</li>
            <li>If clicked, the group 'refined', animating into a pre-determined bin and resetting as not "bad".</li>
          </ul>
        </li>
      </ul>
    </td>
  </tr>
  <tr>
    <td colspan="3" align="center">
      <img src="https://github.com/user-attachments/assets/33353a90-e046-4c57-9a20-040a64b68e8e" width="50%">
    </td>
  </tr>
</table>



### b. The Interface

- A moving Perlin noise map offsets each number (vertically or horizontally).  
- Activated bad groups expand / contract / jitter.
- Numbers scale based on cursor position.
- Refined groups animate into bins, with a percent bar keeping track of your progress.  

<p align="center">
  <img src="https://github.com/user-attachments/assets/14310434-81b7-4f62-8833-948708edee78" width="15%">&nbsp;&nbsp;&nbsp;
  <img src="https://github.com/user-attachments/assets/6e2145ac-08f5-44f9-bdad-ebf272cbc0ce" width="15%">&nbsp;&nbsp;&nbsp;
  <img src="https://github.com/user-attachments/assets/5d105682-2eb9-4c84-9806-cfafa7e4dd91" width="15%">
</p>

#### Additional Features:
- The application is cross-compatible, allowing compilation for both Linux and Raspberry Pi (ARM).
- Debug mode reveals various settings.
- Save / load configurations to / from disk (JSON).
<p align="center">
  <img src="https://github.com/user-attachments/assets/f3261ced-c8a8-4699-a935-dd7249ce5d18" width="50%">
</p>

- An 'idle' mode can be enabled to display the Lumon logo screensaver.
- Numbers animate-on when going from idle mode.
- The user can navigate the full grid using arrow and zoom keys.

---
---

# II. The Housing
