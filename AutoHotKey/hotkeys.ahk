/*
### Hotkeys

^ = Control
# = Windows
! = Alt
+ = Shift
*/

; Send Special Keys
Send, {Enter}  ; Enter key
Send, !{F4}  ; Alt F4
Send, {Down}  ; Arrow Keys
Send, {BS}  ; Backspace
Send, {;}  ; Semicolon
SendInput, {Raw}export PS1="\u@\h:\w\$ "


; Activate window by title
; WinActivate, [ WinTitle, WinText, ExcludeTitle, ExcludeText]
WinActivate, Notepad++


; Select menu item
; WinMenuSelectItem, WinTitle, WinText, Menu [, SubMenu1, SubMenu2, SubMenu3, SubMenu4, SubMenu5, SubMenu6, ExcludeTitle]
WinMenuSelectItem, Pro Tools, , Edit, Trim Clip, Start to Fill Selection
; Select by index - 4th menu, 5th entry
WinMenuSelectItem, Pro Tools, , 4&, 5&


; Click coordinates on Window
WinGetPos, X, Y, Width, Height, AudioSuite  ; get values of windows position by name
Width -= 44  ; modify retrieved values
Height -= 22
ControlClick, x%Width% y%Height%, AudioSuite  ; click at coordinates specified by variables
MsgBox % Format("AudioSuite is at {1}, {2}", Width, Height)


; Loop over user-defined value
InputBox, size, Enter Starting Number, Enter the number of tracks to enumarate, , 270, 130, , , , , 1
;         variable     window title         message                             w    h           default value
if(ErrorLevel == 1) {  ; Cancel button was clicked
    return
}
count = 0
Loop % size {
    Send % count
    count++
}
return


; Copy whole line
^MButton::  ; control+middle click
Send, {lbutton down} ; stupid limitation. `Click` won't click cursor position if windows not active
Send, {lbutton up}
Send, {End}
Send, +{Home}
Send, ^c
Send, {Left}
return
