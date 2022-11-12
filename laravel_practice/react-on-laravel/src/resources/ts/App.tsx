import React from "react";
import ReactDOM from 'react-dom';

const App: React.FC = () => {
    return (
        <div>
            <h1>Ahiahi</h1>
        </div>
    );
}

export default App;

if (document.getElementById('app')) {
    ReactDOM.render(<App />, document.getElementById('app'));
}
