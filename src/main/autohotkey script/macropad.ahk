#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.
#MaxHotkeysPerInterval 1000

F13::
Send {Media_Play_Pause}
return

F14::
Send {Volume_Down 1}
return

F15::
Send {Volume_Up 1}
return

F16::
Send {Media_Next}
return

F17::
Send {Media_Prev}
return

F18::
run C:\Program Files\Ultimaker Cura 5.2.1/Ultimaker-Cura.exe
return

F19::
run .... Fusion360.exe
return

F20::
run .... Arduino IDE.exe
return

F21::
run C:\Windows\System32/calc.exe
return

F22::
run C:\Windows/explorer.exe
return

F23::
run .... Code.exe
return

F24::
Shutdown, 1
return

^!a::
Run .... Signal.exe
return

^!u::
Send {Volume_Mute}
return

^!g::
run C:\Program Files (x86)\Steam/steam.exe
return

^!h::
run .... EpicGamesLauncher.exe
return

^!c::
run C:\Riot Games\League of Legends/LeagueClient.exe
return

^!l::
run C:\Program Files (x86)\Battle.net/Battle.net.exe
return