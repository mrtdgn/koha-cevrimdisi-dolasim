[Setup]
AppName=Koha Offline Circulation
AppVersion=1.3
AppPublisher=Kyle M Hall
AppPublisherURL=http://kylehall.info/
AppSupportURL=http://kylehall.info/
AppUpdatesURL=http://kylehall.info/
DefaultDirName={pf}\KohaOfflineCirculation
DefaultGroupName=Koha Offline Circulation
OutputBaseFilename=KohaOfflineCirculation_Installer_1_3
Compression=lzma
AllowNoIcons=yes

[Files]
Source: "KohaOfflineCirculation.exe"; DestDir: "{app}"; Flags: ignoreversion; MinVersion: 0.0,5.0

Source: "platforms\qwindows.dll"; DestDir: "{app}\platforms"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "sqldrivers\qsqlite.dll"; DestDir: "{app}\sqldrivers"
Source: "languages\Translation_en.ts"; DestDir: "{app}\languages"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "languages\Translation_tr.ts"; DestDir: "{app}\languages"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "Qt6Core.dll"; DestDir: "{app}"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "Qt6Gui.dll"; DestDir: "{app}"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "Qt6Sql.dll"; DestDir: "{app}"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "Qt6Widgets.dll"; DestDir: "{app}"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "..\images\icons\koha.ico"; DestDir: "{app}"
Source: "libgcc_s_seh-1.dll"; DestDir: "{app}"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "libstdc++-6.dll"; DestDir: "{app}"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "libwinpthread-1.dll"; DestDir: "{app}"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "res\translation.qrc"; DestDir: "{app}res\translation.qrc"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "res\translation\Translation_tr.qm"; DestDir: "{app}res\translation"; Flags: ignoreversion; MinVersion: 0.0,5.0
Source: "res\translation\Translation_en.qm"; DestDir: "{app}res\translation"; Flags: ignoreversion; MinVersion: 0.0,5.0


[CustomMessages]
NameAndVersion=%1 version %2
AdditionalIcons=Additional icons:
CreateDesktopIcon=Create a &desktop icon
CreateQuickLaunchIcon=Create a &Quick Launch icon
ProgramOnTheWeb=%1 on the Web
UninstallProgram=Uninstall %1
LaunchProgram=Launch %1
AssocFileExtension=&Associate %1 with the %2 file extension
AssocingFileExtension=Associating %1 with the %2 file extension...

[Icons]
Name: "{group}\Koha Offline Circulation"; Filename: "{app}/KohaOfflineCirculation.exe"; WorkingDir: "{app}"; IconFilename: "{app}\koha.ico"
Name: "{commondesktop}\Koha Offline Circulation"; Filename: "{app}/KohaOfflineCirculation.exe"; WorkingDir: "{app}"; IconFilename: "{app}\koha.ico"; IconIndex: 0
