{
  "version": 1,
  "author": "Anonymous maker",
  "editor": "wokwi",
  "parts": [
    {
      "type": "wokwi-pi-pico",
      "id": "pico",
      "top": 0,
      "left": 0,
      "attrs": { "builder": "pico-sdk" }
    },
    {
      "type": "wokwi-ntc-temperature-sensor",
      "id": "ntc1",
      "top": -125.2,
      "left": 45,
      "rotate": 90,
      "attrs": {}
    }
  ],
  "connections": [
    [ "pico:GP0", "$serialMonitor:RX", "", [] ],
    [ "pico:GP1", "$serialMonitor:TX", "", [] ],
    [ "pico:GP26", "ntc1:OUT", "green", [ "h0" ] ],
    [ "ntc1:VCC", "pico:3V3", "red", [ "v0" ] ],
    [ "ntc1:GND", "pico:GND.8", "black", [ "v0" ] ]
  ]
}
