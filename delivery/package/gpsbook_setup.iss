; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{D213F2FB-7B4E-4686-B5E2-456DD963AFC8}
AppName=GPSBook
AppVersion=0.1-Alpha2
AppVerName=GPSBook 0.1-Alpha2
AppPublisher=gpsbook-team
AppPublisherURL=http://gpsbook.free.fr/
AppSupportURL=http://gpsbook.free.fr/
AppUpdatesURL=http://gpsbook.free.fr/
DefaultDirName={pf}\GPSBook
DefaultGroupName=GPSBook
AllowNoIcons=no
LicenseFile=C:\Developpement\GPSBook\delivery\package\gpl-2.0.txt
OutputDir=C:\Developpement\GPSBook\delivery\package\windows
OutputBaseFilename=gpsbook_setup_alpha2
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
; Name: "french"; MessagesFile: "compiler:Languages\French.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked; OnlyBelowVersion: 0,6.1

[Files]
Source: "C:\Developpement\GPSBook\delivery\bin\gpsbook.exe"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\libgcc_s_dw2-1.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\mingwm10.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QGLViewer2.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtCore4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtGui4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtNetwork4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtOpenGL4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtSql4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtWebKit4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtXml4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtSvg4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QGLViewer2.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\qwt6.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\phonon4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\QtXmlPatterns4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\bin\sqldrivers\qsqlite4.dll"; DestDir: "{app}/bin"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\plugins\displayGoogleMap.dll"; DestDir: "{app}/plugins"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\plugins\displayGpxViewDotCom.dll"; DestDir: "{app}/plugins"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\plugins\displayGraphic2D.dll"; DestDir: "{app}/plugins"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\plugins\displayGraphic3D.dll"; DestDir: "{app}/plugins"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\plugins\displayInformation.dll"; DestDir: "{app}/plugins"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\plugins\displayStatistic.dll"; DestDir: "{app}/plugins"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\plugins\filterCleanup.dll"; DestDir: "{app}/plugins"; Flags: ignoreversion
Source: "C:\Developpement\GPSBook\delivery\plugins\ioGPX.dll"; DestDir: "{app}/plugins"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\GPSBook"; Filename: "{app}\bin\gpsbook.exe"
Name: "{group}\{cm:ProgramOnTheWeb,GPSBook}"; Filename: "http://gpsbook.free.fr/"
Name: "{group}\{cm:UninstallProgram,GPSBook}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\GPSBook"; Filename: "{app}\bin\gpsbook.exe"; Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\GPSBook"; Filename: "{app}\bin\gpsbook.exe"; Tasks: quicklaunchicon

[Run]
Filename: "{app}\bin\gpsbook.exe"; Description: "{cm:LaunchProgram,GPSBook}"; Flags: nowait postinstall skipifsilent

