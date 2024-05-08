
"use strict";

let Turn = require('./Turn.js')
let SetOLEDImage = require('./SetOLEDImage.js')
let GetIMU = require('./GetIMU.js')
let SetPinMode = require('./SetPinMode.js')
let SetServoAngle = require('./SetServoAngle.js')
let Move = require('./Move.js')
let get_virtual_color = require('./get_virtual_color.js')
let get_barcode = require('./get_barcode.js')
let GetDistance = require('./GetDistance.js')
let GetKeypad = require('./GetKeypad.js')
let GetRange = require('./GetRange.js')
let GetIntensityDigital = require('./GetIntensityDigital.js')
let SetPinValue = require('./SetPinValue.js')
let SetMotorSpeed = require('./SetMotorSpeed.js')
let GetPinValue = require('./GetPinValue.js')
let SetSingleLEDValue = require('./SetSingleLEDValue.js')
let GetIntensity = require('./GetIntensity.js')
let GetEncoder = require('./GetEncoder.js')
let SetLEDValue = require('./SetLEDValue.js')

module.exports = {
  Turn: Turn,
  SetOLEDImage: SetOLEDImage,
  GetIMU: GetIMU,
  SetPinMode: SetPinMode,
  SetServoAngle: SetServoAngle,
  Move: Move,
  get_virtual_color: get_virtual_color,
  get_barcode: get_barcode,
  GetDistance: GetDistance,
  GetKeypad: GetKeypad,
  GetRange: GetRange,
  GetIntensityDigital: GetIntensityDigital,
  SetPinValue: SetPinValue,
  SetMotorSpeed: SetMotorSpeed,
  GetPinValue: GetPinValue,
  SetSingleLEDValue: SetSingleLEDValue,
  GetIntensity: GetIntensity,
  GetEncoder: GetEncoder,
  SetLEDValue: SetLEDValue,
};
