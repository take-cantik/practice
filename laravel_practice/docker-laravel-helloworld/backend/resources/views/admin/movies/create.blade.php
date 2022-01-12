<h1>Create</h1>
<form action="/admin/movies" method="POST">
  @csrf
  <label>タイトル</label>
  <input type="text" name="title" id="title">
  <label>画像URL</label>
  <input type="text" name="image_url" id="image_url">
  <button type="submit">登録</button>
</form>