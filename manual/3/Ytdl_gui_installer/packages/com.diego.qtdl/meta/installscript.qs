function Component()
{
}
Component.prototype.isDefault = function()
{
return true;
}
Component.prototype.createOperations = function()
{
try
{
component.createOperations();
}
catch (e)
{
print(e);
}
if (installer.value("os") === "win")
{
component.addOperation("CreateShortcut", "@TargetDir@/Ytdl_gui.exe", "@DesktopDir@/Ytdl_gui.lnk");
}
if (installer.value("os") === "x11")
{
component.addOperation("CreateDesktopEntry", "/usr/share/applications/YourApp.desktop", "Version=1.0\nType=Application\nTerminal=false\nExec=@TargetDir@/YourApp.sh\nName=YourApp_name\nIcon=@TargetDir@YourApp_icon.png\nName[en_US]=YourApp_name");
component.addElevatedOperation("Copy", "/usr/share/applications/YourApp.desktop", "@HomeDir@/Desktop/YourApp.desktop");
}
}
