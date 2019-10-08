open Utils;

let logo = requireAssetURI("./logo.svg");
requireCSS("./App.css");


let make = () =>
  <div className="App">
    <header className="App-header">
      <img src={logo} className="App-logo" alt="logo" />
      <p>
        "Edit " -> ReasonReact.string
        <code>
          "src/App.re" -> ReasonReact.string
        </code>
        " and save to reload." -> ReasonReact.string
      </p>
      <a
        className="App-link"
        href="https://reactjs.org"
        target="_blank"
        rel="noopener noreferrer"
      >
        "Learn React" -> ReasonReact.string
      </a>
      <Component1 message="Hello! Click this text." />
      <Component2 greeting="Hello!" />
    </header>
  </div>;
