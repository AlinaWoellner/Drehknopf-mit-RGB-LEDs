# Drehknopf-mit-RGB-LEDs


<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
***
***
***
*** To avoid retyping too much info. Do a search and replace for the following:
*** github_username, repo_name, twitter_handle, email, project_title, project_description
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->

<!-- PROJECT LOGO -->
<br />
<p align="center">

  <h3 align="center">Drehknopf-mit-RGB-LEDs</h3>

  <p align="center">
    Eine Übung zum Steuern eines LED-Streifens mit dem Arduino UNO
    <br />
    <br />
    <a href="https://github.com/AlinaWoellner/Drehknopf-mit-RGB-LEDs">Dokumentation</a>
    ·
    <a href="https://github.com/AlinaWoellner/Drehknopf-mit-RGB-LEDs/issues">Fehlerbericht</a>
    ·
    <a href="https://github.com/AlinaWoellner/Drehknopf-mit-RGB-LEDs/issues">Verbesserungsvorschlag</a>
  </p>
</p>



<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary><h2 style="display: inline-block">Inhalt</h2></summary>
  <ol>
    <li>
      <a href="#das-projekt">Das Projekt</a>
      <ul>
        <li><a href="#werkzeuge">Werkzeuge</a></li>
      </ul>
    </li>
    <li>
      <a href="#einstieg">Einstieg</a>
      <ul>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#beispielaufbau">Beispielaufbau</a></li>
    <li><a href="#kontakt">Kontakt</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## Das Projekt

Dieses Projekt dient dazu sich mit dem Ansteuern von LED-Leisten mit Hilfe eines Arduino UNO vertraut zu machen 

### Werkzeuge

#### Zubehör
* []()  8 Kabel
* []()  1 Drehregler
* []()  1 Steckplatine
* []()  1 LED-Streifen
* []()  1 Arduino UNO

#### Programm
* []()  Visual Studio Code
* []()  Platform IO Plugin
* []()  FastLED Library

<!-- GETTING STARTED -->
## Einstieg

### Installation

Mit Visual Studio Code:

1. Platform IO PLUGIN
   ```sh
   In der Suchleiste von Visual Studio Code "Platform IO" eingeben und auf den installieren Button klicken
   ```
2. Projekt erstellen
   ```sh
   Im Plugin auf "New Project" klicken
   ```
3. FastLED hinzufügen
   ```sh
   In Platform IO auf libraries klicken, dort nach "FastLED" suchen und dem Projekt hinzufügen
   ```
4. Code
   ```sh
   Nun den Code kopieren und in die Datei "main.cpp" des "src"-Ordners einfügen
   ```
5. Kompilieren und Uploaden
   ```sh
   Den Arduino mit dem Computer verbinden. In VS Code per Häkchen den Code kompilieren und mit rechtsgerichtetem Pfeil uploaden
   ```

<!-- USAGE EXAMPLES -->
## Beispielaufbau
Schaltplan, erstellt mit TinkerCAD:
![Schaltung_LED-Leiste](https://user-images.githubusercontent.com/82510384/127341124-66ae06f7-26a4-4167-9503-6fd221d3b147.png)

  1.  Ein Kabel mit Pin 3 und dem Din an dem LED-Streifen verbinden
  2.  Ein Kabel mit dem Minuspol der Steckplatine und dem GND an dem LED-Streifen verbinden
  3.  Ein Kabel mit dem Minuspol der Steckplatine und dem Drehregler verbinden
  4.  Ein Kabel mit dem Minuspol der Steckplatine und dem GND am Arduino UNO verbinden
  5.  Ein Kabel mit dem Pluspol der Steckplatine und den 5V an dem LED-Streifen verbinden
  6.  Ein Kabel mit dem Pluspol der Steckplatine und dem Drehregler verbinden
  7.  Ein Kabel mit dem Pluspol der Steckplatine und den 5V am Arduino UNO verbinden
  8.  Ein Kabel mit dem Drehregler auf der Steckplatine und der A0 am Arduino UNO verbinden
  9.  Den Arduino UNO per USB-Kabel mit einem Computer/ Laptop verbinden
  10. Das Programm in Visual Studio Code auf den Arduino laden
  11. Mit dem Drehregler rumspielen 

Fertiger Aufbau:
![LED-Leiste_Aufbau](https://user-images.githubusercontent.com/82510384/127368790-42452b37-afea-4fa0-880f-1992ee742dca.jpg)

Video:
https://youtu.be/grDoqDZncz4 


<!-- CONTACT -->
## Kontakt

Projekt Link: [https://github.com/AlinaWoellner/Drehknopf-mit-RGB-LEDs](https://github.com/AlinaWoellner/Drehknopf-mit-RGB-LEDse)
