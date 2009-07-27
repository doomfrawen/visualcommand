<!DOCTYPE GUIXML>
<VisualCommand Title="Ping" AppName="ping.exe" WebSite="microsoft" Description="&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.0//EN&quot; &quot;http://www.w3.org/TR/REC-html40/strict.dtd&quot;>&#xa;&lt;html>&lt;head>&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; />&lt;style type=&quot;text/css&quot;>&#xa;p, li { white-space: pre-wrap; }&#xa;&lt;/style>&lt;/head>&lt;body style=&quot; font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;&quot;>&#xa;&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;>&lt;span style=&quot; font-size:8pt;&quot;>a windows ping utility&lt;/span>&lt;/p>&lt;/body>&lt;/html>" Mac="False" Windows="True" Linux="False" >
 <test>
  <checkBoxEditor StringFormat="-t " Description="Ping the specified host until stopped.&#xa;To see statistics and continue - type Control-Break;&#xa;To stop - type Control-C." Required="True" RequiredChecked="False" />
  <checkBoxEditor StringFormat="-a " Description="Resolve addressses to hostnames." Required="True" RequiredChecked="False" />
  <numericEditor StringFormat="-n %s " Number="99" Description="Number of echo requests to send." Required="True" RequiredChecked="False" />
  <numericEditor StringFormat="-l %s " Number="99" Description="Send buffer size." Required="True" RequiredChecked="False" />
  <numericEditor StringFormat="-i %s " Number="99" Description="Time to Live." Required="True" RequiredChecked="False" />
  <numericEditor StringFormat="-v %s " Number="99" Description="Type of Service" Required="True" RequiredChecked="False" />
  <numericEditor StringFormat="-r %s " Number="99" Description="Record route for count hops." Required="True" RequiredChecked="False" />
  <numericEditor StringFormat="-s %s " Number="99" Description="Timestamp for count hops." Required="True" RequiredChecked="False" />
  <numericEditor StringFormat="-w %s " Number="99" Description="Timeout in milliseconds to wait for each reply." Required="True" RequiredChecked="False" />
  <StringEditor String="Google.com" StringFormat="%s " Description=" target_name" Required="False" RequiredChecked="True" />
 </test>
</VisualCommand>
