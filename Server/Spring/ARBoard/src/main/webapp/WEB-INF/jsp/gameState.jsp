<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>

<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>

<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">

<style>
table, th, td {
	border: 1px solid black;
	border-collapse: collapse;
}

th, td {
	padding: 5px;
	text-align: left;
}
</style>

<title>Game Room State</title>
</head>
<body>
	Game Count : ${count}<br>
	gameState ( 0: GameRoom 1:GameReady 2:GameRunning 3:GameEnd )
	<table style="width: 100%">
		<tr>
			<th>Member</th>
			<th>GameKey</th>
			<th>State</th>
		</tr> 
		<c:forEach items="${games}" var="list">
			<tr>
				<c:forEach items="${list}" var="map">
					<th>${map.value}</th>
				</c:forEach>
				<br>
			</tr>
		</c:forEach>
	</table>



</body>
</html>