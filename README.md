# Introduction

The goal of this project was to create a working miniature desktop display inspired by the 'Macrodata Refinement' computers featured in Apple TV's *Severance*. This build consists of two key aspects: the **software** and the **hardware design**, both outlined below.

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

  - Generate a randomized **number grid** with grouped 'bad numbers'.  
  - Animate and style the **interface** to match the aesthetics of the show. 

## a. The Number Grid  

![generation](https://github.com/user-attachments/assets/ba004291-8ea9-4b84-995f-f6229e6b8b41)

> **GENERATE**  
  - A *N×N* grid is created.  
  - Each cell is filled with a random integer between 0-9.  

> **MAP**  
  - A Perlin noise map assigns smooth gradient values to the grid.  
  - This ensures numbers are naturally grouped rather than randomly scattered.  

> **THRESHOLD**  
  - Each cell's value is compared to a set threshold.  
  - Values above the threshold are marked as 'bad'/'scary' numbers.  

> **GROUP**  
  - 'Bad' numbers are grouped based on proximity to one another.  
  - At random intervals, a group visible in the viewport will be activated:  
    - If hovered over, they become 'super active', extending their active time and appearing agitated.  
    - If clicked, the group is **'refined'**, animating into a pre-determined bin and resetting as no longer 'bad'.  

## b. The Interface

<p align="center">
  <img src="https://github.com/user-attachments/assets/14310434-81b7-4f62-8833-948708edee78" width="30%">&nbsp;
  <img src="https://github.com/user-attachments/assets/6e2145ac-08f5-44f9-bdad-ebf272cbc0ce" width="30%">&nbsp;
  <img src="https://github.com/user-attachments/assets/5d105682-2eb9-4c84-9806-cfafa7e4dd91" width="30%">
</p>

- A moving Perlin noise map offsets each number (vertically or horizontally).  
- Activated bad groups expand / contract / jitter.
- Numbers scale-up based on cursor position.
- Refined groups animate into bins, with a percent bar keeping track of your progress.  

#### Additional Features:
- The application is cross-compatible, allowing compilation for both Linux and Raspberry Pi (ARM).
- A *'debug mode'* reveals various settings (which can be saved / loaded from disk as JSON).
- An *'idle mode'* can be enabled to display the Lumon logo screensaver.
- The user can navigate the full grid using arrow and zoom keys.

---
---

# II. Hardware Design

#### Objectives

  - Reconstruct the computer housing from the show as a printable 3D model.
  - Design the interior to support a RaspberryPi and LCD screen 

## Final Design

- The computer’s outer shell was modeled in Blender from the ground up, closely following reference images from the show to capture the original look.
- The design was then optimized for 3D printing.
  - The structure was made modular, allowing for easy assembly and disassembly.
  - Each part includes a flat printing surface, enabling clean prints without the need for supports.
  - Precise tolerances were incorporated to ensure a snug fit for all components.
- Finally, the interior was equipped with an adjustable Raspberry Pi mount.
  - The mounting bracket can move both laterally and forward, allowing for fine-tuned alignment of the LCD screen with the front panel.

## Final Product
