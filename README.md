# simpleKeypad

## Introduction
Arduino key input support library for DFROBOT Arduino LCD keypad shield (SKU: DFR0009) or its compatibles.

## Features
simpleKeypad library can
 * avoid key debouncing.
 * set key repeat rate.
 * set wait time before a pressed button begins repeating.

## Usage
### Constructor
````
simpleKeypad(int16_t interval, int16_t repeatDelay, int16_t readTimes);
````
* interval（optional; default value: 200ms）
  * key input repeat interval (ms) when pressed continuously
* repeatDelay（optional; default value: 500ms）
  * wait time (ms) to start key input repeating if larger than key input repeat interval
* readTimes（optional; default value: 200）
  * read times of analogRead() for a key reading
  * use minimum value of the readings to avoid key debounce problem

### Functions
````
btnCODE_t read_buttons();
````
returns key code listed below
 * Right  - btnRIGHT  (0)
 * Up     - btnUP     (1)
 * Down   - btnDOWN   (2)
 * Left   - btnLEFT   (3)
 * Select - btnSELECT (4)
 * None   - btnNONE   (5)
 * Void   - btnVOID   (6)

Void means key pressed but **Void** because of key repeat rate limit.

````
void repeatInterval(int16_t interval);
````
set key repeat interval (ms)

### Sample sketch
See sample sketch for basic usage.

## Releases

### 1.0.0 - Mar  04, 2019

### 1.0.1 - June 09, 2020
* modified initializing method of variables in the constructor
* modified keycode data type from int to enum (btnCODE_t)

## 概要

DFROBOTのArduino LCD keypad shield (SKU: DFR0009)、およびその互換シールド用のキーパッド入力補助ライブラリ

## 特徴

 * チャタリング防止対策機能
 * キーを押し続けた場合のキー入力リピート速度を指定可能
 * キーを押し続けた場合の最初のリピート開始までの時間を指定可能


## 使い方

### コンストラクタ
````
simpleKeypad(int16_t interval, int16_t repeatDelay, int16_t readTimes);
````
* interval（省略可;初期値: 200ms）
  * キーリピート時の入力間隔(ms)
* repeatDelay（省略可;初期値: 500ms）
  * キーリピートを開始するまでの時間(ms)
  * この設定値が上のキーリピート間隔（interval）より大きければ、最初のリピート入力開始までの時間はこの設定値となります。
* readTimes（省略可;初期値: 200）
  * この指定回数キーを読み、analogRead()の最も小さい値を読み取り値として処理します（接触不良による抵抗値の増大対策）。

### 機能
````
btnCODE_t read_buttons();
````
押されたキーのコードを返します。キーコードは以下の通り

 * Right  - btnRIGHT  (0)
 * Up     - btnUP     (1)
 * Down   - btnDOWN   (2)
 * Left   - btnLEFT   (3)
 * Select - btnSELECT (4)
 * None   - btnNONE   (5)
 * Void   - btnVOID   (6)
````
void repeatInterval(int16_t interval);
````
キーリピート間隔を指定します(ms)。コンストラクタで指定できるので、普通は使うことはないと思います。

### サンプルスケッチ
具体的な使い方はサンプルスケッチを見てください。

