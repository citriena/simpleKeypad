# simpleKeypad

## Introduction
Arduino key input support library for DFROBOT Arduino LCD keypad shield (SKU: DFR0009) or its compatible.

## Features
simpleKeypad library can
 * avoid key debounce.
 * set key repeat rate.
 * set wait time before a pressed button begins repeating.

## Function
**int read_buttons()**  returns key code listed below.

 * Right  - 0 (btnRIGHT)
 * Up     - 1 (btnUP)
 * Down   - 2 (btnDOWN)
 * Left   - 3 (btnLEFT)
 * Select - 4 (btnSELECT)
 * None   - 5 (btnNONE)
 * Void   - 6 (btnVOID)

Void means key pressed but **Void** because of key repeat rate limit.

## Usage
See sample sketch for basic usage.

## 概要

DFROBOTのArduino LCD keypad shield (SKU: DFR0009)、およびその互換シールド用のキーパッド入力補助ライブラリ

## 機能

・int read_buttons() で、押されたキーのコードを返します。キーコードは以下の通り

 * Right  - 0 (btnRIGHT)
 * Up     - 1 (btnUP)
 * Down   - 2 (btnDOWN)
 * Left   - 3 (btnLEFT)
 * Select - 4 (btnSELECT)
 * None   - 5 (btnNONE)
 * Void   - 6 (btnVOID)

## 特徴

 * チャタリング防止対応

 指定回数（初期値２００回）キーを読み、analogRead()の最も小さい値を読み取り値として処理します（接触不良による抵抗値の増大対策）。

 * キーを押し続けた場合のキー入力リピート速度を指定可能

 キーを押し続けた場合は、一定間隔（初期値：200ms）でリピート入力処理します。btnVoid は、その場合に実際はキーは押されているが、キー入力として扱わない場合に返すコードです。

 * キーを押し続けた場合の最初のリピート開始までの時間を設定可（初期値：500ms）

 この設定値がキー入力リピート速度の設定より大きければ、最初のリピート入力開始までの時間はこの設定値となります。

## 使い方
具体的な使い方はサンプルスケッチを見てください。

