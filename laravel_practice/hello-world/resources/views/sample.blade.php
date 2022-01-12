<h1>This is Sample page</h1>

<table border="1">
  <tr>
    <th> フルーツ名 </th>
  </tr>
  @foreach($fruit_list as $fruit)
  <tr>
    <td> {{ $fruit["name"] }} </td>
  </tr>
  @endforeach
  </tr>
</table>

<p>合計: {{ $total }}</p>