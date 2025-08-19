
#ifndef INDEXHTML_H
#define INDEXHTML_H

const char stylehead_html[] PROGMEM = R"rawliteral(
  <!DOCTYPE HTML><html>
  <head>
    <link rel='icon' href='/favicon.ico' type='image/x-icon'>
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
    <link rel="apple-touch-icon" sizes="180x180" href="/icon.png">
    <link rel="icon" type="image/png" sizes="192x192" href="/icon.png">

    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Evo Web Radio</title>
    <style>
      html {font-family: Arial; display: inline-block; text-align: center;}
      h2 {font-size: 1.3rem;}
      p {font-size: 0.95rem;}
      table {border: 1px solid black; border-collapse: collapse; margin: 0px 0px;}
      td, th {font-size: 0.8rem; border: 1px solid gray; border-collapse: collapse;}
      td:hover {font-weight:bold;}
      a {color: black; text-decoration: none;}
      body {max-width: 1380px; margin:0px auto; padding-bottom: 25px; background: #D0D0D0;}
      .slider {-webkit-appearance: none; margin: 14px; width: 330px; height: 10px; background: #4CAF50; outline: none; -webkit-transition: .2s; transition: opacity .2s; border-radius: 5px;}
      .slider::-webkit-slider-thumb {-webkit-appearance: none; appearance: none; width: 35px; height: 25px; background: #4a4a4a; cursor: pointer; border-radius: 5px;}
      .slider::-moz-range-thumb { width: 35px; height: 35px; background: #4a4a4a; cursor: pointer; border-radius: 5px;} 
      .button { background-color: #4CAF50; border: 1; color: white; padding: 10px 20px; border-radius: 5px;}
      .buttonBank { background-color: #4CAF50; border: 1; color: white; padding: 8px 8px; border-radius: 5px; width: 35px; height: 35px; margin: 0 1.5px;}
      .buttonBankSelected { background-color: #505050; border: 1; color: white; padding: 8px 8px; border-radius: 5px; width: 35px; height: 35px; margin: 0 1.5px;}
      .buttonBank:active {background-color: #4a4a4a box-shadow: 0 4px #666; transform: translateY(2px);}
      .buttonBank:hover {background-color: #4a4a4a;}
      .button:hover {background-color: #4a4a4a;}
      .button:active {background-color: #4a4a4a; box-shadow: 0 4px #666; transform: translateY(2px);}
      .column { align: center; padding: 5px; display: flex; justify-content: space-between;}
      .columnlist { align: center; padding: 10px; display: flex; justify-content: center;}
      .stationList {text-align:left; margin-top: 0px; width: 280px; margin-bottom:0px;cursor: pointer;}
      .stationNumberList {text-align:center; margin-top: 0px; width: 35px; margin-bottom:0px;}
      .stationListSelected {text-align:left; margin-top: 0px; width: 280px; margin-bottom:0px;cursor: pointer; background-color: #4CAF50;}
      .stationNumberListSelected {text-align:center; margin-top: 0px; width: 35px; margin-bottom:0px; background-color: #4CAF50;}
      .station-name   
    </style>
  </head>
)rawliteral";

const char index_html[] PROGMEM = R"rawliteral(
  <!DOCTYPE HTML><html>
  <head>
    <link rel='icon' href='/favicon.ico' type='image/x-icon'>
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
    <link rel="apple-touch-icon" sizes="180x180" href="/icon.png">
    <link rel="icon" type="image/png" sizes="192x192" href="/icon.png">

    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Evo Web Radio</title>
    <style>
      html {font-family: Arial; display: inline-block; text-align: center;}
      h2 {font-size: 1.3rem;}
      p {font-size: 0.95rem;}
      table {border: 1px solid black; border-collapse: collapse; margin: 0px 0px;}
      td, th {font-size: 0.8rem; border: 1px solid gray; border-collapse: collapse;}
      td:hover {font-weight:bold;}
      a {color: black; text-decoration: none;}
      body {max-width: 1380px; margin:0px auto; padding-bottom: 25px; background: #D0D0D0;}
      .slider {-webkit-appearance: none; margin: 14px; width: 330px; height: 10px; background: #4CAF50; outline: none; -webkit-transition: .2s; transition: opacity .2s; border-radius: 5px;}
      .slider::-webkit-slider-thumb {-webkit-appearance: none; appearance: none; width: 35px; height: 25px; background: #4a4a4a; cursor: pointer; border-radius: 5px;}
      .slider::-moz-range-thumb { width: 35px; height: 35px; background: #4a4a4a; cursor: pointer; border-radius: 5px;} 
      .button { background-color: #4CAF50; border: 1; color: white; padding: 10px 20px; border-radius: 5px;}
      .buttonBank { background-color: #4CAF50; border: 1; color: white; padding: 8px 8px; border-radius: 5px; width: 35px; height: 35px; margin: 0 1.5px;}
      .buttonBankSelected { background-color: #505050; border: 1; color: white; padding: 8px 8px; border-radius: 5px; width: 35px; height: 35px; margin: 0 1.5px;}
      .buttonBank:active {background-color: #4a4a4a box-shadow: 0 4px #666; transform: translateY(2px);}
      .buttonBank:hover {background-color: #4a4a4a;}
      .button:hover {background-color: #4a4a4a;}
      .button:active {background-color: #4a4a4a; box-shadow: 0 4px #666; transform: translateY(2px);}
      .column { align: center; padding: 5px; display: flex; justify-content: space-between;}
      .columnlist { align: center; padding: 10px; display: flex; justify-content: center;}
      .stationList {text-align:left; margin-top: 0px; width: 280px; margin-bottom:0px;cursor: pointer;}
      .stationNumberList {text-align:center; margin-top: 0px; width: 35px; margin-bottom:0px;}
      .stationListSelected {text-align:left; margin-top: 0px; width: 280px; margin-bottom:0px;cursor: pointer; background-color: #4CAF50;}
      .stationNumberListSelected {text-align:center; margin-top: 0px; width: 35px; margin-bottom:0px; background-color: #4CAF50;}
      .station-name   
    </style>
  </head>

  <body>
    <h2>Evo Web Radio</h2>
  
    <div id="display" style="display: inline-block; padding: 5px; border: 2px solid #4CAF50; border-radius: 15px; background-color: #4a4a4a; font-size: 1.45rem; 
      color: #AAA; width: 345px; text-align: center; white-space: nowrap; box-shadow: 0 0 20px #4CAF50;" onClick="flashBackground(); displayMode()">
      
      <div style="margin-bottom: 10px; font-weight: bold; overflow: hidden; text-overflow: ellipsis; -webkit-text-stroke: 0.3px black; text-stroke: 0.3px black;">
        <span id="textStationName"><b>STATIONNAME</b></span>
      </div>
      
      <div style="width: 345px; margin-bottom: 10px;">
        <div id="stationTextDiv" style="display: block; text-overflow: ellipsis; white-space: normal; font-size: 1.0rem; color: #999; margin-bottom: 10px; text-align: center; align-items: center; height: 4.2em; justify-content: center; overflow: hidden; line-height: 1.4em;">
          <span id="stationText">STATIONTEXT</span>
        </div>
      </div>
      
      <div style="height: 1px; background-color: #4CAF50; margin: 5px 0;"></div>

      
      <div style="display: flex; justify-content: center; gap: 25px; font-size: 1.0rem; color: #999;">
        <div><span id="bankValue">Bank: --</span></div>
      
        <div style="display: flex; justify-content: center; gap: 10px; font-size: 0.65rem; color: #999;margin: 3px 0;">
          <div><span id="samplerate">---.-kHz</span></div>
          <div><span id="bitrate">---bit</span></div>
          <div><span id="bitpersample">---kbps</span></div>
          <div><span id="streamformat">----</span></div>
        </div>
        
        <div><span id="stationNumber">Station: --</span></div>
      </div>

  </div>
  <br>
  <br>
  <script>

  var websocket;

  function updateSliderVolume(element) 
  {
    var sliderValue = document.getElementById("volumeSlider").value;
    document.getElementById("textSliderValue").innerText = sliderValue;

    if (websocket && websocket.readyState === WebSocket.OPEN) 
    {
      websocket.send("volume:" + sliderValue);
    } 
    else 
    {
      console.warn("WebSocket niepołączony");
    }
  }

  function changeStation(number) 
  {
    if (websocket.readyState === WebSocket.OPEN) 
    {
      websocket.send("station:" + number);
    } 
    else 
    {
      console.log("WebSocket nie jest otwarty");
    }
  }

  function changeBank(number) 
  {
    if (websocket.readyState === WebSocket.OPEN) 
    {
      websocket.send("bank:" + number);
    } 
    else 
    {
      console.log("WebSocket nie jest otwarty");
    }
  }


  function displayMode() 
  {
    //fetch("/displayMode")
    if (websocket.readyState === WebSocket.OPEN) 
    {
      websocket.send("displayMode");
    } 
    else 
    {
      console.log("WebSocket nie jest otwarty");
    }
  }
  
  
  function connectWebSocket() 
  {
    websocket = new WebSocket('ws://' + window.location.hostname + '/ws');
    websocket.onopen = function () 
    {
      console.log("WebSocket polaczony");
    };
    
    websocket.onclose = function (event) 
    {
      console.log("WebSocket zamkniety. Proba ponownego polaczenia za 3 sekundy...");
      setTimeout(connectWebSocket, 3000); // próba ponownego połączenia
    };

    websocket.onerror = function (error) 
    {
      console.error("Blad WebSocket: ", error);
      websocket.close(); // zamyka połączenie, by wywołać reconnect
    };
    
    websocket.onmessage = function(event) 
    {
      if (event.data === "reload") 
      {
        location.reload();
      }  
      
      if (event.data.startsWith("volume:")) 
      {
        var vol = parseInt(event.data.split(":")[1]);
        document.getElementById("volumeSlider").value = vol;
        document.getElementById("textSliderValue").innerText = vol;
      }
      
      if (event.data.startsWith("station:")) 
      {
        var station = parseInt(event.data.split(":")[1]);
        highlightStation(station);
        //document.getElementById('stationNumber').innerText = event.data.split(':')[1];
        document.getElementById('stationNumber').innerText ='Station: ' + station; 
      }
      
      if (event.data.startsWith("stationname:")) 
      {
        var value = event.data.split(":")[1];
        document.getElementById("textStationName").innerHTML = `<b>${value}</b>`;
        //checkStationTextLength();
      }  

      if (event.data.startsWith("stationtext$")) 
      {
        var stationtext = event.data.split("$")[1];
        document.getElementById("stationText").innerHTML = `${stationtext}`;
        //checkStationTextLength();
      }  

      if (event.data.startsWith("bank:")) 
      {
        var bankValue = parseInt(event.data.split(":")[1]);
        document.getElementById('bankValue').innerText = 'Bank: ' + bankValue;
      } 

      if (event.data.startsWith("samplerate:")) 
      {
        var samplerate = parseInt(event.data.split(":")[1]);
        var formattedRate = (samplerate / 1000).toFixed(1) + "kHz";
        document.getElementById('samplerate').innerText = formattedRate;
      }
      
      if (event.data.startsWith("bitrate:")) 
      {	
        var bitrate = parseInt(event.data.split(":")[1]);
        document.getElementById('bitrate').innerText = bitrate + 'kbps';
      }  
      
      if (event.data.startsWith("bitpersample:")) 
      {	
        var bitpersample = parseInt(event.data.split(":")[1]);
        document.getElementById('bitpersample').innerText = bitpersample + 'bit';
      }  
      
      if (event.data.startsWith("streamformat:")) 
      {	
        var streamformat = event.data.split(":")[1];
        document.getElementById('streamformat').innerText = streamformat;
      }  

    }

  };
  
  function highlightStation(stationId) 
  {
    // Usuń poprzednie zaznaczenia
    document.querySelectorAll(".stationList").forEach(el => {
    el.classList.remove("stationListSelected");
    el.innerHTML = el.dataset.stationName || el.innerText; // przywróć oryginalny numer
    });

    document.querySelectorAll(".stationNumberList").forEach(el => {
      el.classList.remove("stationNumberListSelected");
      el.innerHTML = el.dataset.stationNumber || el.innerText; // przywróć oryginalny numer
    });

    // Zaznacz nową stację
    const numCells = document.querySelectorAll(".stationNumberList");
    const stationCells = document.querySelectorAll(".stationList");

    const numCell = numCells[stationId - 1];
    const stationCell = stationCells[stationId - 1];

    if (numCell && stationCell) 
    {
      numCell.classList.add("stationNumberListSelected");
      stationCell.classList.add("stationListSelected");
      
      // Pogrub nazwę stacji
      stationCell.dataset.stationName = stationCell.innerText; // zapisz oryginalny tekst
      stationCell.innerHTML = `<b>${stationCell.innerText}</b>`; // pogrubienie nazwy stacji
        
      // Pogrub numer
      numCell.dataset.stationNumber = numCell.innerText; // zapisz oryginalny numer
      numCell.innerHTML = `<b>${numCell.innerText}</b>`; 
    }
  }
  
  function flashBackground() 
	{
	  const div = document.getElementById('display');
	  const originalColor = div.style.backgroundColor;

	  const textSpan = document.getElementById('textStationName');
    const originalText = textSpan.innerText;


	  div.style.backgroundColor = '#115522'; // kolor flash
	  //textSpan.innerText = 'OLED Display Mode Changed';
    textSpan.innerHTML = '<b>Display Mode Changed</b>';  

	  setTimeout(() => 
	  {
		  div.style.backgroundColor = originalColor;
		  //textSpan.innerText = originalText;
      textSpan.innerHTML = `<b>${originalText}</b>`;
	  }, 150); // czas w ms flasha
	}


  document.addEventListener("DOMContentLoaded", function () 
  {
    connectWebSocket(); // podlaczamy websockety

    const slider = document.getElementById("volumeSlider");
    slider.addEventListener("wheel", function (event) 
    {
      event.preventDefault(); // zapobiega przewijaniu strony

      let currentValue = parseInt(slider.value);
      const step = parseInt(slider.step) || 1;
      const max = parseInt(slider.max);
      const min = parseInt(slider.min);

      if (event.deltaY < 0) {
        // przewijanie w górę (zwiększ)
        slider.value = Math.min(currentValue + step, max);
      } else {
        // przewijanie w dół (zmniejsz)
        slider.value = Math.max(currentValue - step, min);
      }

      updateSliderVolume(slider); // wywołaj aktualizację
    });
  });

  window.onpageshow = function(event) 
  {
    if (event.persisted) 
    {
      window.location.reload();
    }
  };

 </script>

)rawliteral";

const char list_html[] PROGMEM = R"rawliteral(
  <!DOCTYPE HTML><html>
  <head>
    <link rel='icon' href='/favicon.ico' type='image/x-icon'>
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
    <link rel="apple-touch-icon" sizes="180x180" href="/icon.png">
    <link rel="icon" type="image/png" sizes="192x192" href="/icon.png">

    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Evo Web Radio</title>
    <style>
      html {font-family: Arial; display: inline-block; text-align: center;}
      h2 {font-size: 1.3rem;}
      p {font-size: 1.1rem;}
      table {border: 1px solid black; border-collapse: collapse; margin: 0px 0px;}
      td, th {font-size: 0.8rem; border: 1px solid gray; border-collapse: collapse;}
      td:hover {font-weight:bold;}
      a {color: black; text-decoration: none;}
      body {max-width: 1380px; margin:0px auto; padding-bottom: 25px;}
      .columnlist { align: center; padding: 10px; display: flex; justify-content: center;}
    </style>
  </head>
)rawliteral";

const char config_html[] PROGMEM = R"rawliteral(
  <!DOCTYPE HTML>
  <html>
  <head>
    <link rel='icon' href='/favicon.ico' type='image/x-icon'>
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
    <link rel="apple-touch-icon" sizes="180x180" href="/icon.png">
    <link rel="icon" type="image/png" sizes="192x192" href="/icon.png">

    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Evo Web Radio</title>
    <style>
      html {font-family: Arial; display: inline-block; text-align: center;}
      h1 {font-size: 2.3rem;}
      h2 {font-size: 1.3rem;}
      table {border: 1px solid black; border-collapse: collapse; margin: 20px auto; width: 80%;}
      th, td {font-size: 1rem; border: 1px solid gray; padding: 8px; text-align: left;}
      td:hover {font-weight: bold;}
      a {color: black; text-decoration: none;}
      body {max-width: 1380px; margin:0 auto; padding-bottom: 25px;}
      .tableSettings {border: 2px solid #4CAF50; border-collapse: collapse; margin: 10px auto; width: 60%;}
    </style>
    </head>

  <body>
  <h2>Evo Web Radio - Settings</h2>
  <form action="/configupdate" method="POST">
  <table class="tableSettings">
  <tr><th>Setting</th><th>Value</th></tr>
  <tr><td>Normal Display Brightness (0-255), default:180</td><td><input type="number" name="displayBrightness" min="1" max="255" value="%D1"></td></tr>
  <tr><td>Dimmed Display Brightness (0-255), default:20</td><td><input type="number" name="dimmerDisplayBrightness" min="1" max="255" value="%D2"></td></tr>
  <tr><td>Auto Dimmer Delay Time (1-255 sec.), default:5</td><td><input type="number" name="displayAutoDimmerTime" min="1" max="255" value="%D3"></td></tr>
  <tr><td>Auto Dimmer, default:On</td><td><select name="displayAutoDimmerOn"><option value="1"%S1>On</option><option value="0"%S2>Off</option></select></td></tr>
  <tr><td>Time Voice Info Every Hour, default:On</td><td><select name="timeVoiceInfoEveryHour"><option value="1"%S3>On</option><option value="0"%S4>Off</option></select></td></tr>
  <tr><td>VU Meter Mode (0-1),    0-dashed lines, 1-continuous lines</td><td><input type="number" name="vuMeterMode" min="0" max="1" value="%D4"></td></tr>
  <tr><td>Encoder Function Order (0-1),   0-Volume, click for station list, 1-Station list, click for Volume</td><td><input type="number" name="encoderFunctionOrder" min="0" max="1" value="%D5"></td></tr>
  <tr><td>Display Mode (0-2),   0-Radio scroller, 1-Clock, 2-Three lines without scroll</td><td><input type="number" name="displayMode" min="0" max="2" value="%D6"></td></tr>

  

  <!-- <tr><td>VU Meter Refresh Time (20-100ms)</td><td><input type="number" name="vuMeterRefreshTime" min="15" max="100" value="%D7"></td></tr> -->

  <tr><td>Radio Scroller & VU Meter Refresh Time (15-100ms), default:50</td><td><input type="number" name="scrollingRefresh" min="15" max="100" value="%D8"></td></tr>
  <tr><td>ADC Keyboard Enabled, default:Off</td><td><select name="adcKeyboardEnabled"><option value="1"%S7>On</option><option value="0"%S8>Off</option></select></td></tr>

  <tr><td>OLED Power Save Mode, default:Off</td><td><select name="displayPowerSaveEnabled"><option value="1"%S9>On</option><option value="0"%S10>Off</option></select></td></tr>
  <tr><td>OLED Power Save Time (1-600sek.), default:20</td><td><input type="number" name="displayPowerSaveTime" min="1" max="600" value="%D9"></td></tr>
  <tr><td>Volume Steps 1-21 [Off], 1-42  [On], default:Off</td><td><select name="maxVolumeExt"><option value="1"%S11>On</option><option value="0"%S12>Off</option></select></td></tr>
  <tr><td>Station Name Read From Stream [On-From Stream, Off-From Bank] EXPERIMENTAL</td><td><select name="stationNameFromStream"><option value="1"%S17>On</option><option value="0"%S18>Off</option></select></td></tr>
  <tr><th><b>VU Meter Settings</b></th></tr>
  <tr><td>VU Meter Visible (Mode 0 only), default:On</td><td><select name="vuMeterOn"><option value="1"%S5>On</option><option value="0"%S6>Off</option></select></td></tr>
  <tr><td>VU Meter Peak & Hold Function, default:On </td><td><select name="vuPeakHoldOn"><option value="1"%13>On</option><option value="0"%S14>Off</option></select></td></tr>
  <tr><td>VU Meter Smooth Function, default:On </td><td><select name="vuSmooth"><option value="1"%S15>On</option><option value="0"%S16>Off</option></select></td></tr>

  <tr><td>VU Meter Smooth Rise Speed [1 low - 32 High], default:24</td><td><input type="number" name="vuRiseSpeed" min="1" max="32" value="%D10"></td></tr>
  <tr><td>VU Meter Smooth Fall Speed [1 low - 32 High], default:6</td><td><input type="number" name="vuFallSpeed" min="1" max="32" value="%D11"></td></tr>
  

  </table>
  <input type="submit" value="Update">
  </form>
  <p style='font-size: 0.8rem;'><a href='/menu'>Go Back</a></p>
  </body>
  </html>
)rawliteral";

const char adc_html[] PROGMEM = R"rawliteral(
  <!DOCTYPE HTML>
  <html>
  <head>
    <link rel='icon' href='/favicon.ico' type='image/x-icon'>
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
    <link rel="apple-touch-icon" sizes="180x180" href="/icon.png">
    <link rel="icon" type="image/png" sizes="192x192" href="/icon.png">

    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Evo Web Radio</title>
    <style>
      html {font-family: Arial; display: inline-block; text-align: center;}
      h1 {font-size: 2.3rem;}
      h2 {font-size: 1.3rem;}
      table {border: 1px solid black; border-collapse: collapse; margin: 10px auto; width: 40%;}
      th, td {font-size: 1rem; border: 1px solid gray; padding: 8px; text-align: left;}
      td:hover {font-weight: bold;}
      a {color: black; text-decoration: none;}
      body {max-width: 1380px; margin:0 auto; padding-bottom: 15px;}
      .tableSettings {border: 2px solid #4CAF50; border-collapse: collapse; margin: 10px auto; width: 40%;}
    </style>
    </head>

  <body>
  <h2>Evo Web Radio - ADC Settings</h2>
  <form action="/configadc" method="POST">
  <table class="tableSettings">
  <tr><th>Button</th><th>Value</th></tr>
  <tr><td>keyboardButtonThreshold_0</td><td><input type="number" name="keyboardButtonThreshold_0" min="0" max="4095" value="%D0"></td></tr>
  <tr><td>keyboardButtonThreshold_1</td><td><input type="number" name="keyboardButtonThreshold_1" min="0" max="4095" value="%D1"></td></tr>
  <tr><td>keyboardButtonThreshold_2</td><td><input type="number" name="keyboardButtonThreshold_2" min="0" max="4095" value="%D2"></td></tr>
  <tr><td>keyboardButtonThreshold_3</td><td><input type="number" name="keyboardButtonThreshold_3" min="0" max="4095" value="%D3"></td></tr>
  <tr><td>keyboardButtonThreshold_4</td><td><input type="number" name="keyboardButtonThreshold_4" min="0" max="4095" value="%D4"></td></tr>
  <tr><td>keyboardButtonThreshold_5</td><td><input type="number" name="keyboardButtonThreshold_5" min="0" max="4095" value="%D5"></td></tr>
  <tr><td>keyboardButtonThreshold_6</td><td><input type="number" name="keyboardButtonThreshold_6" min="0" max="4095" value="%D6"></td></tr>
  <tr><td>keyboardButtonThreshold_7</td><td><input type="number" name="keyboardButtonThreshold_7" min="0" max="4095" value="%D7"></td></tr>
  <tr><td>keyboardButtonThreshold_8</td><td><input type="number" name="keyboardButtonThreshold_8" min="0" max="4095" value="%D8"></td></tr>
  <tr><td>keyboardButtonThreshold_9</td><td><input type="number" name="keyboardButtonThreshold_9" min="0" max="4095" value="%D9"></td></tr>
  <tr><td>keyboardButtonThreshold_Shift - Ok/Enter</td><td><input type="number" name="keyboardButtonThreshold_Shift" min="0" max="4095" value="%D10"></td></tr>
  <tr><td>keyboardButtonThreshold_Memory - Bank Menu</td><td><input type="number" name="keyboardButtonThreshold_Memory" min="0" max="4095" value="%D11"></td></tr>
  <tr><td>keyboardButtonThreshold_Band -  Back</td><td><input type="number" name="keyboardButtonThreshold_Band" min="0" max="4095" value="%D12"></td></tr>
  <tr><td>keyboardButtonThreshold_Auto -  Display Mode</td><td><input type="number" name="keyboardButtonThreshold_Auto" min="0" max="4095" value="%D13"></td></tr>
  <tr><td>keyboardButtonThreshold_Scan - Dimmer/Network Bank Update</td><td><input type="number" name="keyboardButtonThreshold_Scan" min="0" max="4095" value="%D14"></td></tr>
  <tr><td>keyboardButtonThreshold_Mute - Mute</td><td><input type="number" name="keyboardButtonThreshold_Mute" min="0" max="4095" value="%D15"></td></tr>
  <tr><td>keyboardButtonThresholdTolerance</td><td><input type="number" name="keyboardButtonThresholdTolerance" min="0" max="50" value="%D16"></td></tr>
  <tr><td>keyboardButtonNeutral</td><td><input type="number" name="keyboardButtonNeutral" min="0" max="4095" value="%D17"></td></tr>
  <tr><td>keyboardSampleDelay (30-300ms)</td><td><input type="number" name="keyboardSampleDelay" min="30" max="300" value="%D18"></td></tr>
  </table>
  <input type="submit" value="ADC Thresholds Update">
  </form>
  <br>
  <button onclick="toggleAdcDebug()">ADC Debug ON/OFF</button>
  <script>
  function toggleAdcDebug() {
      const xhr = new XMLHttpRequest();
      xhr.open("POST", "/toggleAdcDebug", true);
      xhr.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
      xhr.onload = function() {
          if (xhr.status === 200) {
              alert("ADC Debug is now " + (xhr.responseText === "1" ? "ON" : "OFF"));
          } else {
              alert("Error: " + xhr.statusText);
          }
      };
      xhr.send(); // Wysyłanie pustego zapytania POST
  }
  </script>


  <p style='font-size: 0.8rem;'><a href='/menu'>Go Back</a></p>
  </body>
  </html>
)rawliteral";

const char menu_html[] PROGMEM = R"rawliteral(
  <!DOCTYPE HTML><html>
  <head>
  <link rel='icon' href='/favicon.ico' type='image/x-icon'>
  <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
  <link rel="apple-touch-icon" sizes="180x180" href="/icon.png">
  <link rel="icon" type="image/png" sizes="192x192" href="/icon.png">

  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>Evo Web Radio</title>
  <style>
    html {font-family: Arial; display: inline-block; text-align: center;}
    h2 {font-size: 1.3rem;}
    p {font-size: 1.1rem;}
    a {color: black; text-decoration: none;}
    body {max-width: 1380px; margin:0px auto; padding-bottom: 25px;}
    .button { background-color: #4CAF50; border: 1; color: white; padding: 10px 20px; border-radius: 5px; width:200px;}
    .button:hover {background-color: #4a4a4a;}
    .button:active {background-color: #4a4a4a; box-shadow: 0 4px #666; transform: translateY(2px);}
    
  </style>
  </head>
  <body>
  <h2>Evo Web Radio - Menu</h2>
  <!-- <br><button class="button" onclick="location.href='/fwupdate'">OTA Update (Old)</button><br> -->
  <br><button class="button" onclick="location.href='/info'">Info</button><br>
  <br><button class="button" onclick="location.href='/ota'">OTA Update</button><br>
  <br><button class="button" onclick="location.href='/adc'">ADC Keyboard Settings</button><br>
  <br><button class="button" onclick="location.href='/list'">SD / SPIFFS Explorer</button><br>
  <br><button class="button" onclick="location.href='/editor'">Memory Bank Editor</button><br>
  <br><button class="button" onclick="location.href='/config'">Settings</button><br>
  <br><p style='font-size: 0.8rem;'><a href="#" onclick="window.location.replace('/')">Go Back</a></p>
  </body></html>

)rawliteral";

const char info_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
  <html>
  <head>
    <link rel='icon' href='/favicon.ico' type='image/x-icon'>
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon">
    <link rel="apple-touch-icon" sizes="180x180" href="/icon.png">
    <link rel="icon" type="image/png" sizes="192x192" href="/icon.png">

    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Evo Web Radio</title>
    <style>
      html {font-family: Arial; display: inline-block; text-align: center;}
      h2 {font-size: 1.3rem;}
      table {border: 1px solid black; border-collapse: collapse; margin: 10px auto; width: 40%;}
      th, td {font-size: 1rem; border: 1px solid gray; padding: 8px; text-align: left;}
      td:hover {font-weight: bold;}
      a {color: black; text-decoration: none;}
	  
      body {max-width: 1380px; margin:0 auto; padding-bottom: 15px;}
      .tableSettings {border: 2px solid #4CAF50; border-collapse: collapse; margin: 10px auto; width: 40%;} 
	  .signal-bars {display: inline-block; vertical-align: middle; margin-left: 10px;}
	  .bar {display: inline-block; width: 5px; margin-right: 2px; background-color: #F2F2F2; height: 10px;}
      .bar.active { background-color: #4CAF50;}
	  
    </style>
    </head>

  <body>
  <h2>Evo Web Radio - Info</h2>
  <form action="/configadc" method="POST">
  <table class="tableSettings">

  <tr><td>ESP Serial Number:</td><td><input name="espSerial" value="%D0"></td></tr>
  <tr><td>Firmware version:</td><td><input name="espFw" value="%D1"></td></tr>
  <tr><td>Hostname:</td><td><input name="hostnameValue" value="%D2"></td></tr>
  <tr><td>WiFi Signal Strength:</td><td><input id="wifiSignal" value="%D3"> dBm
  <div class="signal-bars" id="signalBars">
      <div class="bar" style="height:2px;"></div>
      <div class="bar" style="height:6px;"></div>
      <div class="bar" style="height:10px;"></div>
      <div class="bar" style="height:14px;"></div>
      <div class="bar" style="height:18px;"></div>
      <div class="bar" style="height:22px;"></div>
    </div>


  </td></tr>
  <tr><td>WiFi SSID:</td><td><input name="wifiSsid" value="%D4"></td></tr>
  <tr><td>IP number:</td><td><input name="ipValue" value="%D5"></td></tr>
  <tr><td>MAC Address:</td><td><input name="macValue" value="%D6"></td></tr>
  
  </table>
  </form>
  <br>
  <p style='font-size: 0.8rem;'><a href='/menu'>Go Back</a></p>
  
<script>
  function updateSignalBars(signal) {
    const bars = document.querySelectorAll('#signalBars .bar');
    let level = 0;

    signal = parseInt(signal);

    if (signal >= -50) level = 6;
    else if (signal >= -57) level = 5;
    else if (signal >= -66) level = 4;
    else if (signal >= -74) level = 3;
    else if (signal >= -81) level = 2;
    else if (signal >= -88) level = 1;
    else level = 0;

    bars.forEach((bar, index) => {
      if (index < level) {
        bar.classList.add('active');
      } else {
        bar.classList.remove('active');
      }
    });
  }

  const signalInput = document.getElementById('wifiSignal');
  updateSignalBars(signalInput.value);

 </script>
  </body>
  </html>
)rawliteral";


#endif