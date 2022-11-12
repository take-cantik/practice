import React from "react";
import ReactDOM from 'react-dom';
import {
    BrowserRouter,
    Link,
    Routes,
    Route,
} from "react-router-dom";
import Home from "~/page";
import Test1 from "~/page/test-1";
import Test2 from "~/page/test-2";

const Application: React.FC = () => {
    return (
        <BrowserRouter>
            <div>
                <nav>
                    <ul>
                        <li>
                            <Link to="/">Home</Link>
                        </li>
                        <li>
                            <Link to="/test-1">Test1</Link>
                        </li>
                        <li>
                            <Link to="/test-2">Test2</Link>
                        </li>
                    </ul>
                </nav>

                <Routes>
                    <Route path="/" element={<Home />} />
                    <Route path="/test-1" element={<Test1 />} />
                    <Route path="/test-2" element={<Test2 />} />
                </Routes>
            </div>
        </BrowserRouter>
    );
}

export default Application;

if (document.getElementById('app')) {
    ReactDOM.render(<Application />, document.getElementById('app'));
}
