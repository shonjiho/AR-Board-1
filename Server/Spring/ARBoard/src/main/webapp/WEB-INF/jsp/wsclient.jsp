<%@ page contentType="text/html; charset=utf-8" pageEncoding="utf-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>Websocket Client</title>

<script
  src="https://code.jquery.com/jquery-2.1.4.min.js"  integrity="sha256-8WqyJLuWKRBVhxXIL1jBDD7SDxU936oZkCnxQbWwJVw=" crossorigin="anonymous"></script>
<script type="text/javascript">
$(function () { 
    var ws = new WebSocket("ws://125.130.223.88/arboard/websocket/echo");
    ws.onopen = function () {
        $('#chatStatus').text('Info: connection opened.');
 
        $('input[name=chatInput]').on('keydown', function(evt){
            if(evt.keyCode==13){
                var msg = $('input[name=chatInput]').val();
                ws.send(msg);
                $('input[name=chatInput]').val('');
            }
        });
        $('#btn').click(function(){
        	var msg = $('input[name=message]').val();
            ws.send(msg);
            $('input[name=message]').val('');
        	
        });
        
    };
    
    ws.onmessage = function (event) {
        $('textarea').eq(0).prepend(event.data+'\n');
    };
    
    ws.onclose = function (event) {
        $('#chatStatus').text('Info: connection closed.');
    };
}); 

</script>
</head>
<body>
<p>

<div id='chatStatus'></div>
<textarea name="chatMsg" rows="5" cols="40"></textarea>
<p>
메시지 입력 : <input type="text" name="chatInput">
<form action="">
		<input id="btn"  value="Send" type="button">
		<input id="textID" name="message" value="" type="text">
			<br>
</form>
</body>
</html>

 